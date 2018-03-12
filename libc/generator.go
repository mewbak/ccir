// Copyright 2017 The CCIR Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// +build ignore

package main

import (
	"bytes"
	"flag"
	"fmt"
	"go/scanner"
	"go/token"
	"io/ioutil"
	"log"
	"os"
	"path/filepath"
	"regexp"
	"runtime"
	"sort"
	"strings"

	"github.com/cznic/cc"
	"github.com/cznic/ccir"
	"github.com/cznic/internal/buffer"
	"github.com/cznic/xc"
)

var (
	cpp         = flag.Bool("cpp", false, "")
	dict        = xc.Dict
	include     []string
	oDebug      = flag.String("debug", "", "")
	oPos        = flag.Bool("pos", false, "")
	oPredefined = flag.Bool("predefined", false, "")
	predefined  string
	sysInclude  []string

	renames = map[string]string{
		"select": "select_",
	}
)

func rename(s string) string {
	if r, ok := renames[s]; ok {
		return r
	}

	return s
}

func errStr(err error) string {
	switch x := err.(type) {
	case scanner.ErrorList:
		if len(x) != 1 {
			x.RemoveMultiples()
		}
		var b bytes.Buffer
		for i, v := range x {
			if i != 0 {
				b.WriteByte('\n')
			}
			b.WriteString(v.Error())
			if i == 9 {
				fmt.Fprintf(&b, "\n\t... and %v more errors", len(x)-10)
				break
			}
		}
		return b.String()
	default:
		return err.Error()
	}
}

func position(n cc.Node) token.Position { return xc.FileSet.Position(n.Pos()) }

func emit(nm, more string, b []byte) {
	f, err := os.Create(fmt.Sprintf("%s_%s_%s.h", nm, runtime.GOOS, runtime.GOARCH))
	if err != nil {
		log.Fatal(err)
	}

	if _, err := fmt.Fprintf(f, `// Code generated by running "go generate". DO NOT EDIT.

// +build ignore
%s
	`, more); err != nil {
		log.Fatal(err)
	}

	b = bytes.TrimSpace(b)
	if _, err := f.Write(b); err != nil {
		log.Fatal(err)
	}

	if _, err := f.WriteString("\n"); err != nil {
		log.Fatal(err)
	}

	if err := f.Close(); err != nil {
		log.Fatal(err)
	}

	if nm == "predefined" {
		return
	}

	model, err := ccir.NewModel()
	if err != nil {
		log.Fatal(err)
	}

	ast, err := cc.Parse(
		fmt.Sprintf(`
#define __os__ %s
#define __arch__ %s

#include <builtin.h>
#include <%s.h>

int _;
`, runtime.GOOS, runtime.GOARCH, nm),
		nil,
		model,
		cc.AllowCompatibleTypedefRedefinitions(),
		cc.EnableAnonymousStructFields(),
		cc.EnableWideBitFieldTypes(),
		cc.EnableAnonymousStructFields(),
		cc.SysIncludePaths([]string{"."}),
	)
	if err != nil {
		log.Fatalf(errStr(err))
	}

	if err := os.MkdirAll(nm, 0777); err != nil {
		log.Fatal(err)
	}

	base := filepath.Base(nm)
	f2, err := os.Create(fmt.Sprintf("%s/%s_%s_%s.go", nm, base, runtime.GOOS, runtime.GOARCH))
	if err != nil {
		log.Fatal(err)
	}

	if _, err := fmt.Fprintf(f2, `// Code generated by running "go generate". DO NOT EDIT.

%s

package %s

`, more, rename(base)); err != nil {
		log.Fatal(err)
	}

	var buf buffer.Bytes
	buf.WriteString("const (\n")
	var a []string
	for k, v := range ast.Macros {
		if v.Value != nil && v.Type.Kind() != cc.Bool {
			switch fn := v.DefTok.Position().Filename; {
			case
				fn == "builtin.h",
				fn == "<predefine>",
				strings.HasPrefix(fn, "predefined_"):
				// ignore
			default:
				a = append(a, string(dict.S(k)))
			}
		}
	}
	sort.Strings(a)
	for _, v := range a {
		m := ast.Macros[dict.SID(v)]
		if m.Value == nil {
			log.Fatal("TODO")
		}

		switch t := m.Type; t.Kind() {
		case
			cc.Int, cc.UInt, cc.Long, cc.ULong, cc.LongLong, cc.ULongLong,
			cc.Float, cc.Double, cc.LongDouble, cc.Bool:
			fmt.Fprintf(&buf, "X%s = %v\n", v, m.Value)
		case cc.Ptr:
			switch t := t.Element(); t.Kind() {
			case cc.Char:
				fmt.Fprintf(&buf, "X%s = %q\n", v, dict.S(int(m.Value.(cc.StringLitID))))
			default:
				log.Fatalf("%v", t.Kind())
			}
		default:
			log.Fatalf("%v", t.Kind())
		}
	}

	a = a[:0]
	for _, v := range ast.Declarations.Identifiers {
		switch x := v.Node.(type) {
		case *cc.DirectDeclarator:
			d := x.TopDeclarator()
			id, _ := d.Identifier()
			if x.EnumVal == nil {
				break
			}

			a = append(a, string(dict.S(id)))
		default:
			log.Fatalf("%T", x)
		}
	}
	sort.Strings(a)
	for _, v := range a {
		dd := ast.Declarations.Identifiers[dict.SID(v)].Node.(*cc.DirectDeclarator)
		fmt.Fprintf(&buf, "X%s = %v\n", v, dd.EnumVal)
	}

	buf.WriteString(")\n")
	if _, err := f2.Write(buf.Bytes()); err != nil {
		log.Fatal(err)
	}

	buf.Close()
	if err := f2.Close(); err != nil {
		log.Fatal(err)
	}
}

func macro(ast *cc.TranslationUnit, m *cc.Macro) string {
	s := ""
	if m.IsFnLike {
		var a [][]byte
		for _, m := range m.Args {
			a = append(a, dict.S(m))
		}
		s = fmt.Sprintf("(%s)", bytes.Join(a, []byte(", ")))
	}

	repl := m.ReplacementToks()
	if len(repl) > 0 {
		nm := -1
		switch tok := repl[0]; {
		case tok.Rune == cc.IDENTIFIER:
			nm = tok.Val
		case tok.Rune == cc.IDENTIFIER_LPAREN:
			log.Fatal("TODO")
		}
		if nm > 0 {
			if _, ok := ast.Declarations.Identifiers[nm]; ok {
				m.Value = nil
			}
		}
	}
	switch {
	case len(repl) != 0 && m.Value != nil && repl[0].Rune != cc.IDENTIFIER:
		switch t := m.Type; t.Kind() {
		case cc.Int, cc.Double:
			s = fmt.Sprintf("%s (%v)", s, m.Value)
		case cc.UInt:
			s = fmt.Sprintf("%s (%vu)", s, m.Value)
		case cc.Long, cc.LongDouble:
			s = fmt.Sprintf("%s (%vl)", s, m.Value)
		case cc.ULong:
			s = fmt.Sprintf("%s (%vul)", s, m.Value)
		case cc.LongLong:
			s = fmt.Sprintf("%s (%vll)", s, m.Value)
		case cc.ULongLong:
			s = fmt.Sprintf("%s (%vull)", s, m.Value)
		case cc.Float:
			s = fmt.Sprintf("%s (%vf)", s, m.Value)
		case cc.Ptr:
			switch t := t.Element(); t.Kind() {
			case cc.Char:
				s = fmt.Sprintf("%s %q", s, dict.S(int(m.Value.(cc.StringLitID))))
			case cc.Int:
				// TODO: this seems strange
				switch v := m.Value.(type) {
				case int32:
					s = fmt.Sprintf("%s %q", s, dict.S(int(v)))
				case cc.LongStringLitID:
					s = fmt.Sprintf("%s %q", s, dict.S(int(v)))
				default:
					log.Fatalf("%s: %v", m.DefTok.Position(), t.Kind())
				}

			default:
				log.Fatalf("%s: %v", m.DefTok.Position(), t.Kind())
			}
		default:
			log.Fatalf("%s: %v", m.DefTok.Position(), t.Kind())
		}
	default:
		var a []string
		for _, v := range repl {
			a = append(a, cc.TokSrc(v))
		}
		s = fmt.Sprintf("%s %v", s, strings.Join(a, " "))
	}
	return fmt.Sprintf("#define %s%s", dict.S(m.DefTok.Val), s)
}

func structOrUnion(b *buffer.Bytes, n *cc.StructOrUnion) {
	switch n.Case {
	case 0: // "struct"
		b.WriteString("struct ")
	case 1: // "union"   // Case 1
		b.WriteString("union ")
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func identifierOpt(b *buffer.Bytes, n *cc.IdentifierOpt) {
	if n != nil {
		fmt.Fprintf(b, "%s ", dict.S(n.Token.Val))
	}
}

func specifierQualifierListOpt(b *buffer.Bytes, n *cc.SpecifierQualifierListOpt) {
	if n != nil {
		specifierQualifierList(b, n.SpecifierQualifierList)
	}
}

func specifierQualifierList(b *buffer.Bytes, n *cc.SpecifierQualifierList) {
	switch n.Case {
	case 0: // TypeSpecifier SpecifierQualifierListOpt
		typeSpecifier(b, n.TypeSpecifier)
		specifierQualifierListOpt(b, n.SpecifierQualifierListOpt)
	case 1: // TypeQualifier SpecifierQualifierListOpt  // Case 1
		typeQualifier(b, n.TypeQualifier)
		specifierQualifierListOpt(b, n.SpecifierQualifierListOpt)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func typeQualifierList(b *buffer.Bytes, n *cc.TypeQualifierList) {
	switch n.Case {
	case 0: // TypeQualifier
		typeQualifier(b, n.TypeQualifier)
	case 1: // TypeQualifierList TypeQualifier  // Case 1
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func typeQualifierListOpt(b *buffer.Bytes, n *cc.TypeQualifierListOpt) {
	if n != nil {
		typeQualifierList(b, n.TypeQualifierList)
	}
}

func pointer(b *buffer.Bytes, n *cc.Pointer) {
	switch n.Case {
	case 0: // '*' TypeQualifierListOpt
		b.WriteByte('*')
		typeQualifierListOpt(b, n.TypeQualifierListOpt)
	case 1: // '*' TypeQualifierListOpt Pointer  // Case 1
		b.WriteByte('*')
		typeQualifierListOpt(b, n.TypeQualifierListOpt)
		pointer(b, n.Pointer)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func pointerOpt(b *buffer.Bytes, n *cc.PointerOpt) {
	if n != nil {
		pointer(b, n.Pointer)
	}
}

func directAbstractDeclarator(b *buffer.Bytes, n *cc.DirectAbstractDeclarator) {
	switch n.Case {
	case 0: // '(' AbstractDeclarator ')'
		b.WriteByte('(')
		abstractDeclarator(b, n.AbstractDeclarator)
		b.WriteByte(')')
	case 1: // DirectAbstractDeclaratorOpt '[' ExpressionOpt ']'                             // Case 1
		if d := n.DirectAbstractDeclaratorOpt; d != nil {
			panic("TODO")
		}
		b.WriteByte('[')
		expressionOpt(b, n.ExpressionOpt)
		b.WriteByte(']')
	case 7: // DirectAbstractDeclarator '(' ParameterTypeListOpt ')'
		directAbstractDeclarator(b, n.DirectAbstractDeclarator)
		b.WriteByte('(')
		parameterTypeListOpt(b, n.ParameterTypeListOpt)
		b.WriteByte(')')
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func abstractDeclarator(b *buffer.Bytes, n *cc.AbstractDeclarator) {
	switch n.Case {
	case 0: // Pointer
		pointer(b, n.Pointer)
	case 1: // PointerOpt DirectAbstractDeclarator  // Case 1
		pointerOpt(b, n.PointerOpt)
		directAbstractDeclarator(b, n.DirectAbstractDeclarator)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func abstractDeclaratorOpt(b *buffer.Bytes, n *cc.AbstractDeclaratorOpt) {
	if n != nil {
		abstractDeclarator(b, n.AbstractDeclarator)
	}
}

func parameterDeclaration(b *buffer.Bytes, n *cc.ParameterDeclaration) {
	switch n.Case {
	case 0: // DeclarationSpecifiers Declarator
		declarationSpecifiers(b, n.DeclarationSpecifiers)
		declarator(b, n.Declarator)
	case 1: // DeclarationSpecifiers AbstractDeclaratorOpt  // Case 1
		declarationSpecifiers(b, n.DeclarationSpecifiers)
		abstractDeclaratorOpt(b, n.AbstractDeclaratorOpt)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func parameterList(b *buffer.Bytes, n *cc.ParameterList) {
	for first := true; n != nil; n = n.ParameterList {
		if !first {
			b.WriteByte(',')
		}
		first = false
		parameterDeclaration(b, n.ParameterDeclaration)
	}
}

func parameterTypeList(b *buffer.Bytes, n *cc.ParameterTypeList) {
	switch n.Case {
	case 0: // ParameterList
		parameterList(b, n.ParameterList)
	case 1: // ParameterList ',' "..."  // Case 1
		parameterList(b, n.ParameterList)
		b.WriteString(",...")
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func parameterTypeListOpt(b *buffer.Bytes, n *cc.ParameterTypeListOpt) {
	if n != nil {
		parameterTypeList(b, n.ParameterTypeList)
	}
}

func expression(b *buffer.Bytes, n *cc.Expression) {
	if n.Value != nil {
		constantExpression(b, n.Value, n.Type)
		return
	}

	log.Fatalf("%s: internal error: %v", position(n), n.Case)
}

func expressionOpt(b *buffer.Bytes, n *cc.ExpressionOpt) {
	if n != nil {
		expression(b, n.Expression)
	}
}

func directDeclarator(b *buffer.Bytes, n *cc.DirectDeclarator) {
	switch n.Case {
	case 0: // IDENTIFIER
		fmt.Fprintf(b, "%s ", dict.S(n.Token.Val))
	case 1: // '(' Declarator ')'                                                 // Case 1
		b.WriteByte('(')
		declarator(b, n.Declarator)
		b.WriteByte(')')
	case 2: // DirectDeclarator '[' TypeQualifierListOpt ExpressionOpt ']'        // Case 2
		directDeclarator(b, n.DirectDeclarator)
		b.WriteByte('[')
		typeQualifierListOpt(b, n.TypeQualifierListOpt)
		expressionOpt(b, n.ExpressionOpt)
		b.WriteByte(']')
	case 3: // DirectDeclarator '[' "static" TypeQualifierListOpt Expression ']'  // Case 3
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 4: // DirectDeclarator '[' TypeQualifierList "static" Expression ']'     // Case 4
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 5: // DirectDeclarator '[' TypeQualifierListOpt '*' ']'                  // Case 5
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 6: // DirectDeclarator '(' ParameterTypeList ')'                         // Case 6
		directDeclarator(b, n.DirectDeclarator)
		b.WriteByte('(')
		parameterTypeList(b, n.ParameterTypeList)
		b.WriteByte(')')
	case 7: // DirectDeclarator '(' IdentifierListOpt ')'                         // Case 7
		directDeclarator(b, n.DirectDeclarator)
		b.WriteByte('(')
		identifierListOpt(n.IdentifierListOpt)
		b.WriteByte(')')
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func identifierListOpt(n *cc.IdentifierListOpt) {
	if n != nil {
		identifierList(n.IdentifierList)
	}
}

func identifierList(n *cc.IdentifierList) {
	//	        IDENTIFIER
	//	|       IdentifierList ',' IDENTIFIER  // Case 1
	switch n.Case {
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func declarator(b *buffer.Bytes, n *cc.Declarator) {
	pointerOpt(b, n.PointerOpt)
	directDeclarator(b, n.DirectDeclarator)
}

func declaratorOpt(b *buffer.Bytes, n *cc.DeclaratorOpt) {
	if n != nil {
		declarator(b, n.Declarator)
	}
}

func structDeclarator(b *buffer.Bytes, n *cc.StructDeclarator) {
	switch n.Case {
	case 0: // Declarator
		declarator(b, n.Declarator)
	case 1: // DeclaratorOpt ':' ConstantExpression  // Case 1
		declaratorOpt(b, n.DeclaratorOpt)
		b.WriteByte(':')
		constantExpression(b, n.ConstantExpression.Value, n.ConstantExpression.Type)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func structDeclaratorList(b *buffer.Bytes, n *cc.StructDeclaratorList) {
	i := 0
	for ; n != nil; n = n.StructDeclaratorList {
		if i > 0 {
			b.WriteByte(',')
		}
		structDeclarator(b, n.StructDeclarator)
		i++
	}
}

func structDeclaration(b *buffer.Bytes, n *cc.StructDeclaration) {
	switch n.Case {
	case 0: // SpecifierQualifierList StructDeclaratorList ';'
		specifierQualifierList(b, n.SpecifierQualifierList)
		structDeclaratorList(b, n.StructDeclaratorList)
		b.WriteByte(';')
	case 1: // SpecifierQualifierList ';'                       // Case 1
		specifierQualifierList(b, n.SpecifierQualifierList)
		b.WriteByte(';')
	case 2: // StaticAssertDeclaration                          // Case 2
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func structDeclarationList(b *buffer.Bytes, n *cc.StructDeclarationList) {
	for ; n != nil; n = n.StructDeclarationList {
		structDeclaration(b, n.StructDeclaration)
	}
}

func structOrUnionSpecifier(b *buffer.Bytes, n *cc.StructOrUnionSpecifier) {
	switch n.Case {
	case 0: // StructOrUnion IdentifierOpt '{' StructDeclarationList '}'
		structOrUnion(b, n.StructOrUnion)
		identifierOpt(b, n.IdentifierOpt)
		b.WriteByte('{')
		structDeclarationList(b, n.StructDeclarationList)
		b.WriteByte('}')
	case 1: // StructOrUnion IDENTIFIER                                   // Case 1
		structOrUnion(b, n.StructOrUnion)
		fmt.Fprintf(b, "%s ", dict.S(n.Token.Val))
	case 2: // StructOrUnion IdentifierOpt '{' '}'                        // Case 2
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func enumerationConstant(b *buffer.Bytes, n *cc.EnumerationConstant) {
	fmt.Fprintf(b, "%s ", dict.S(n.Token.Val))
}

func constantExpression(b *buffer.Bytes, v interface{}, t cc.Type) {
	switch t.Kind() {
	case cc.Int:
		fmt.Fprintf(b, "%v ", v)
	case cc.UInt:
		fmt.Fprintf(b, "%vu ", v)
	case cc.Long:
		fmt.Fprintf(b, "%vl ", v)
	case cc.ULong:
		fmt.Fprintf(b, "%vul ", v)
	case cc.ULongLong:
		fmt.Fprintf(b, "%vull", v)
	default:
		log.Fatalf("internal error: %v", t.Kind())
	}
}

func enumerator(b *buffer.Bytes, n *cc.Enumerator) {
	switch n.Case {
	case 0: // EnumerationConstant
		enumerationConstant(b, n.EnumerationConstant)
	case 1: // EnumerationConstant '=' ConstantExpression  // Case 1
		enumerationConstant(b, n.EnumerationConstant)
		b.WriteByte('=')
		constantExpression(b, n.ConstantExpression.Value, n.ConstantExpression.Type)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func enumeratorList(b *buffer.Bytes, n *cc.EnumeratorList) {
	for first := true; n != nil; n = n.EnumeratorList {
		if !first {
			b.WriteByte(',')
		}
		first = false
		enumerator(b, n.Enumerator)
	}
}

func enumSpecifier(b *buffer.Bytes, n *cc.EnumSpecifier) {
	switch n.Case {
	case 0: // "enum" IdentifierOpt '{' EnumeratorList CommaOpt '}'
		b.WriteString("enum ")
		identifierOpt(b, n.IdentifierOpt)
		b.WriteByte('{')
		enumeratorList(b, n.EnumeratorList)
		b.WriteByte('}')
	case 1: // "enum" IDENTIFIER                                     // Case 1
		b.WriteString("enum ")
		identifierOpt(b, n.IdentifierOpt)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func typeSpecifier(b *buffer.Bytes, n *cc.TypeSpecifier) {
	switch n.Case {
	case 0: // "void"
		b.WriteString("void ")
	case 1: // "char"                       // Case 1
		b.WriteString("char ")
	case 2: // "short"                      // Case 2
		b.WriteString("short ")
	case 3: // "int"                        // Case 3
		b.WriteString("int ")
	case 4: // "long"                       // Case 4
		b.WriteString("long ")
	case 5: // "float"                      // Case 5
		b.WriteString("float ")
	case 6: // "double"                     // Case 6
		b.WriteString("double ")
	case 7: // "signed"                     // Case 7
		b.WriteString("signed ")
	case 8: // "unsigned"                   // Case 8
		b.WriteString("unsigned ")
	case 9: // "_Bool"                      // Case 9
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 10: // "_Complex"                   // Case 10
		b.WriteString("_Complex ")
	case 11: // StructOrUnionSpecifier       // Case 11
		structOrUnionSpecifier(b, n.StructOrUnionSpecifier)
	case 12: // EnumSpecifier                // Case 12
		enumSpecifier(b, n.EnumSpecifier)
	case 13: // TYPEDEFNAME                  // Case 13
		fmt.Fprintf(b, "%s ", dict.S(n.Token.Val))
	case 14: // "typeof" '(' Expression ')'  // Case 14
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 15: // "typeof" '(' TypeName ')'    // Case 15
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func declarationSpecifiersOpt(b *buffer.Bytes, n *cc.DeclarationSpecifiersOpt) {
	if n != nil {
		declarationSpecifiers(b, n.DeclarationSpecifiers)
	}
}

func storageClassSpecifier(b *buffer.Bytes, n *cc.StorageClassSpecifier) {
	switch n.Case {
	case 0: // "typedef"
		b.WriteString("typedef ")
	case 1: // "extern"    // Case 1
		b.WriteString("extern ")
	case 2: // "static"    // Case 2
		b.WriteString("static ")
	case 3: // "auto"      // Case 3
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 4: // "register"  // Case 4
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func typeQualifier(b *buffer.Bytes, n *cc.TypeQualifier) {
	switch n.Case {
	case 0: // "const"
		b.WriteString("const ")
	case 1: // "restrict"  // Case 1
		b.WriteString("restrict ")
	case 2: // "volatile"  // Case 2
		b.WriteString("volatile ")
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func declarationSpecifiers(b *buffer.Bytes, n *cc.DeclarationSpecifiers) {
	switch n.Case {
	case 0: // StorageClassSpecifier DeclarationSpecifiersOpt
		storageClassSpecifier(b, n.StorageClassSpecifier)
		declarationSpecifiersOpt(b, n.DeclarationSpecifiersOpt)
	case 1: // TypeSpecifier DeclarationSpecifiersOpt          // Case 1
		typeSpecifier(b, n.TypeSpecifier)
		declarationSpecifiersOpt(b, n.DeclarationSpecifiersOpt)
	case 2: // TypeQualifier DeclarationSpecifiersOpt          // Case 2
		typeQualifier(b, n.TypeQualifier)
		declarationSpecifiersOpt(b, n.DeclarationSpecifiersOpt)
	case 3: // FunctionSpecifier DeclarationSpecifiersOpt      // Case 3
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func designator(b *buffer.Bytes, n *cc.Designator) {
	switch n.Case {
	case 0: // '[' ConstantExpression ']'
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 1: // '.' IDENTIFIER              // Case 1
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func designatorList(b *buffer.Bytes, n *cc.DesignatorList) {
	for ; n != nil; n = n.DesignatorList {
		designator(b, n.Designator)
	}
}

func designation(b *buffer.Bytes, n *cc.Designation) {
	designatorList(b, n.DesignatorList)
	b.WriteString(" = ")
}

func designationOpt(b *buffer.Bytes, n *cc.DesignationOpt) {
	if n != nil {
		designation(b, n.Designation)
	}
}

func initializerList(b *buffer.Bytes, n *cc.InitializerList) {
	switch n.Case {
	case 0: // DesignationOpt Initializer
		designationOpt(b, n.DesignationOpt)
		initializer(b, n.Initializer)
	case 1: // InitializerList ',' DesignationOpt Initializer  // Case 1
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	case 2: // /* empty */                                     // Case 2
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func initializer(b *buffer.Bytes, n *cc.Initializer) {
	switch n.Case {
	case 0: // Expression
		expression(b, n.Expression)
	case 1: // '{' InitializerList CommaOpt '}'  // Case 1
		initializerList(b, n.InitializerList)
	case 2: // IDENTIFIER ':' Initializer        // Case 2
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}
func initDeclarator(b *buffer.Bytes, n *cc.InitDeclarator) {
	switch n.Case {
	case 0: // Declarator
		declarator(b, n.Declarator)
	case 1: // Declarator '=' Initializer  // Case 1
		declarator(b, n.Declarator)
		b.WriteByte('=')
		initializer(b, n.Initializer)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
}

func initDeclaratorList(b *buffer.Bytes, n *cc.InitDeclaratorList) {
	i := 0
	for ; n != nil; n = n.InitDeclaratorList {
		if i > 0 {
			b.WriteByte(',')
		}
		initDeclarator(b, n.InitDeclarator)
		i++
	}
}

func initDeclaratorListOpt(b *buffer.Bytes, n *cc.InitDeclaratorListOpt) {
	if n != nil {
		initDeclaratorList(b, n.InitDeclaratorList)
	}
}

func declaration(n *cc.Declaration) (r string) {
	var b buffer.Bytes
	switch n.Case {
	case 0: // DeclarationSpecifiers InitDeclaratorListOpt ';'
		if n.DeclarationSpecifiers.IsTypedef() {
			o := n.InitDeclaratorListOpt
			if o != nil && o.InitDeclaratorList.InitDeclaratorList != nil { // list len != 1
				// "Expand" the typedef so its InitDeclaratorList has one item only. Attempts to bypass cznic/cc#94 until a proper solution is found.
				i := 0
				for l := o.InitDeclaratorList; l != nil; l = l.InitDeclaratorList {
					// make sure we do not redefine enums but only define an alias to them (annoying errors)
					if typeSpec := n.DeclarationSpecifiers.DeclarationSpecifiersOpt.DeclarationSpecifiers.TypeSpecifier; typeSpec != nil && typeSpec.Case == 12 /* ENUM */ {
						enumSpec := typeSpec.EnumSpecifier
						if enumSpec != nil && i > 0 && enumSpec.IdentifierOpt != nil {
							enumSpec.Case = 1 /* ENUM IDENTIFIER */
						}
					}
					declarationSpecifiers(&b, n.DeclarationSpecifiers)
					initDeclarator(&b, l.InitDeclarator)
					b.WriteString(";\n")
					i += 1
				}
				break
			}
		}
		declarationSpecifiers(&b, n.DeclarationSpecifiers)
		initDeclaratorListOpt(&b, n.InitDeclaratorListOpt)
		b.WriteByte(';')
	case 1: // StaticAssertDeclaration                          // Case 1
		log.Fatalf("%s: TODO: %v", position(n), n.Case)
	default:
		log.Fatalf("%s: internal error: %v", position(n), n.Case)
	}
	ret := string(b.Bytes())
	b.Close()
	return ret
}

func extractCopyright(f string) string {
	src, err := ioutil.ReadFile(f)
	if err != nil {
		log.Fatal(err)
	}

	fi := token.NewFileSet().AddFile(f, -1, len(src))
	var s scanner.Scanner
	s.Init(fi, src, nil, scanner.ScanComments)
	for {
		_, tok, lit := s.Scan()
		switch tok {
		case token.EOF:
			return ""
		case token.COMMENT:
			switch {
			case strings.HasPrefix(lit, "/*"):
				if !strings.HasSuffix(lit, "*/") {
					log.Fatal("internal error")
				}

				s := strings.ToLower(strings.TrimSpace(lit[2 : len(lit)-2]))
				if strings.HasPrefix(s, "copyright") {
					return lit
				}
			case strings.HasPrefix(lit, "//"):
				s := strings.TrimSpace(lit[2:])
				if strings.HasPrefix(s, "copyright") {
					return lit
				}
			default:
				log.Fatal("internal error")
			}
		default:
			return ""
		}
	}
}

func skip(f string) bool {
	return strings.HasPrefix(f, "predefined") || f == "<predefine>"
}

func header(nm, mre, dre string) {
	dbg := *oDebug != ""
	if dbg && nm != *oDebug {
		return
	}

	model, err := ccir.NewModel()
	if err != nil {
		log.Fatal(err)
	}

	opts := []cc.Opt{
		cc.EnableAnonymousStructFields(),
		cc.AllowCompatibleTypedefRedefinitions(),
		cc.EnableAsm(),
		cc.EnableIncludeNext(),
		cc.IncludePaths(include),
		cc.SysIncludePaths(sysInclude),
		cc.EnableWideBitFieldTypes(),
		cc.EnableAnonymousStructFields(),
		cc.EnableDefineOmitCommaBeforeDDD(),
	}
	var lpos token.Position
	if *cpp {
		opts = append(opts, cc.Cpp(func(toks []xc.Token) {
			if len(toks) != 0 {
				p := toks[0].Position()
				if p.Filename != lpos.Filename {
					fmt.Fprintf(os.Stderr, "# %d %q\n", p.Line, p.Filename)
				}
				lpos = p
			}
			for _, v := range toks {
				fmt.Fprintf(os.Stderr, "%s", cc.TokSrc(v))
			}
			fmt.Fprintln(os.Stderr)
		}))
	}

	inc := ""
	if nm == "X11/extensions/Xdbe" {
		inc = `
#include <X11/X.h>
#include <X11/Xlib.h>
`
	}
	ast, err := cc.Parse(
		fmt.Sprintf(`
#define __os__ %s
#define __arch__ %s

#define _FILE_OFFSET_BITS 64
#define _ISOC99_SOURCE
#define _XOPEN_SOURCE 500

#include "predefined.h"

%s
#include <%s.h>
`, runtime.GOOS, runtime.GOARCH, inc, nm),
		nil,
		model,
		opts...,
	)
	if err != nil {
		log.Fatal(errStr(err))
	}

	m := map[string]bool{}
	re := regexp.MustCompile(dre)
	dset := map[string][]int{}
	fileinfo := map[int]*scanner.Error{}
	var fo []string
	i := 0
	for l := ast; l != nil; l = l.TranslationUnit {
		n := l.ExternalDeclaration
		pos := position(n)
		f := pos.Filename
		if skip(f) {
			continue
		}

		switch n.Case {
		case 0: // FunctionDefinition
			// nop
		case 1: // Declaration                  // Case 1
			d := declaration(n.Declaration)
			if dbg || re.MatchString(d) {
				if !m[f] {
					m[f] = true
					fo = append(fo, f)
				}
			}
			// we need those to insert/access file information later
			fileinfo[i] = &scanner.Error{Pos: pos, Msg: d}
			// insert the value separately so we can filter out files we do not use
			dset[f] = append(dset[f], i)
			i += 1
		case 2: // BasicAssemblerStatement ';'  // Case 2
			log.Fatalf("%s: TODO %v", pos, n.Case)
		case 3: // ';'                          // Case 3
			log.Fatalf("%s: TODO %v", pos, n.Case)
		default:
			log.Fatalf("%s: internal error", pos)
		}
	}

	re = regexp.MustCompile(mre)
	mset := map[string][]int{}
	for k, v := range ast.Macros {
		pos := position(v.DefTok)
		f := pos.Filename
		if skip(f) {
			continue
		}
		if dbg || re.MatchString(string(dict.S(k))) {
			if !m[f] {
				m[f] = true
				fo = append(fo, f)
			}
		}
		fileinfo[i] = &scanner.Error{Pos: pos, Msg: macro(ast, v)}
		mset[f] = append(mset[f], i)
		i += 1
	}

	var a, more []string
	cp := map[string]bool{}
	aggregatedDecls := []int{}
	for _, f := range fo {
		if s := extractCopyright(f); s != "" {
			cp[f] = true
			more = append(more, fmt.Sprintf(`
// ----------------------------------------------------------------------------
//      %s
// ----------------------------------------------------------------------------
%s
`, f, s))
		}
		aggregatedDecls = append(aggregatedDecls, dset[f]...)
	}
	sort.Sort(sort.IntSlice(aggregatedDecls))
	var lastFile string
	first := true
	for _, idx := range aggregatedDecls {
		entry := fileinfo[idx]
		if lastFile != entry.Pos.Filename && !first {
			a = append(a, fmt.Sprintf("// %s\n", entry.Pos.Filename))
		}
		first = false
		lastFile = entry.Pos.Filename
		a = append(a, entry.Msg)
	}
	aggregatedMacros := []int{}
	for _, f := range fo {
		if !cp[f] {
			if s := extractCopyright(f); s != "" {
				more = append(more, fmt.Sprintf(`
// ----------------------------------------------------------------------------
//      %s
// ----------------------------------------------------------------------------
%s
`, f, s))
			}
		}
		aggregatedMacros = append(aggregatedMacros, mset[f]...)
	}
	sort.Sort(sort.IntSlice(aggregatedMacros))
	var a2 []string
	for _, idx := range aggregatedMacros {
		entry := fileinfo[idx]
		a2 = append(a2, entry.Msg)
	}
	sort.Strings(a2)
	a = append(a, a2...)

	emit(nm, strings.Join(more, "\n"), []byte(strings.Join(a, "\n")))
}

func cppMacros() {
	a := strings.Split(predefined, "\n")
	w := 0
	for _, v := range a {
		v = strings.TrimSpace(v)
		l := strings.ToLower(v)
		if v == "" || strings.Contains(l, "gcc") || strings.Contains(l, "gnu") {
			continue
		}
		a[w] = v
		w++
	}
	emit("predefined", "", []byte(strings.Join(a[:w], "\n")))
}

func main() {
	log.SetFlags(log.Lmicroseconds | log.Lshortfile)
	flag.Parse()
	var err error
	if predefined, include, sysInclude, err = cc.HostConfig("-std=c99"); err != nil {
		log.Fatal(err)
	}

	if *oPredefined {
		cppMacros()
		return
	}

	for _, v := range []struct{ nm, mre, dre string }{
		//TODO{"alloca", "TODO", "TODO"},
		//TODO{"complex", "TODO", "TODO"},
		{"ctype", "TODO", "tolower|__int32_t|pthreadlocinfo|__ctype_b_loc"},
		{"errno", "EINTR|ETIMEDOUT", "errno"},
		{"fcntl", "F_WRLCK", "_off64_t|__time32_t|open|struct flock|__off_t"},
		{"float", "DBL_MAX", "TODO"},
		{"inttypes", "PRI", "TODO"},
		{"limits", "INT_MAX", "TODO"},
		{"locale", "__LC_ALL", "setlocale"},
		{"math", "HUGE", "sin|_locale_t"},
		{"sched", "TODO", "sched_yield|__pid_t"},
		{"setjmp", "TODO", "TODO"},
		{"stdarg", "va_list", "TODO"},
		{"stdbool", "true", "TODO"},
		{"stddef", "offsetof", "errno_t"},
		{"stdint", "TODO", "uint32_t"},
		{"stdio", "FILENAME_MAX", "printf|__off_t|__mbstate_t|size_t|_off64_t"},
		{"stdlib", "TODO", "qsort|wchar_t"},
		{"string", "TODO", "strcpy|size_t"},
		{"strings", "TODO", "index|size_t"},
		{"sys/stat", "TODO", "stat|__dev_t|_dev_t|time_t|_off_t"},
		{"sys/time", "TODO", "timeval|sigset_t|__time_t|errno_t"},
		//TODO{"sys/wait", "TODO", "TODO"},
		{"time", "TODO", "time_t|size_t"},
		{"unistd", "_SC_PAGESIZE", "read|size_t|_off64_t"},
		//TODO{"wchar", "TODO", "TODO"},
	} {
		header(v.nm, v.mre, v.dre)
	}

	// OS-specific headers
	for _, v := range []struct{ os, nm, mre, dre string }{
		{"windows", "process", "TODO", "wchar_t"},
		{"windows", "windows", "ERROR_ACCESS_DENIED|__MSABI_LONG", "CRITICAL_SECTION|wchar_t|WORD|HANDLE|GUID|SOCKET|u_int|timeout|_func__|PTIMEVAL|in_addr|QueryPerformanceCounter"},
		{"windows", "malloc", "TODO", "_msize|size_t"},
		{"linux", "dlfcn", "RTLD_NOW", "dlsym"},
		{"linux", "sys/mman", "PROT_READ", "mmap|size_t"},
		{"linux", "sys/types", "TODO", "size_t"},
		{"linux", "pthread", "TODO", "pthread_mutex_t|size_t"},
		{"linux", "memory", "TODO", "TODO"},
		{"linux", "alloca", "TODO", "alloca|size_t"},
		{"linux", "signal", "SIGINT", "signal|sig_atomic_t|pid_t"},
		{"linux", "dirent", "TODO", "DIR|ino_t|dirent"},
		{"linux", "sys/uio", "TODO", "iovec|size_t"},
		{"linux", "sys/select", "FD_SETSIZE", "sigset_t|suseconds_t|FD_ZERO"},
		{"linux", "arpa/inet", "TODO", "htonl|in_addr_t|sa_family_t|size_t|uint32_t"},
		{"linux", "netinet/in", "TODO", "htonl|sa_family_t|size_t|uint32_t"},
		{"linux", "sys/socket", "SOL_SOCKET|SOCK_STREAM", "recv|socklen_t|sa_family_t|size_t"},
		{"linux", "sys/un", "TODO", "sockaddr_un|sa_family_t"},
		{"linux", "netinet/tcp", "TCP_NODELAY", "TODO"},
		{"linux", "netdb", "TODO", "gethostbyname|__socklen_t|sa_family_t|size_t|uint32_t"},
		{"linux", "X11/Xauth", "_Xconst", "memcpy|size_t|fpos_t|__mbstate_t|Xauth"},
		{"linux", "X11/Xfuncproto", "_Xconst", "TODO"},
		{"linux", "X11/Xfuncs", "TODO", "TODO"},
		{"linux", "X11/Xos", "O_WRONLY", "access|__intptr_t|ssize_t|size_t|open"},
		{"linux", "X11/Xthreads", "TODO", "TODO"},
		{"linux", "sys/param", "TODO", "TODO"},
		{"linux", "iconv", "TODO", "iconv|size_t"},
		{"linux", "ffi", "TODO", "TODO"},
		{"linux", "libintl", "TODO", "TODO"},
		{"linux", "X11/Xlib", "TODO", "XPoint|Pixmap|wchar_t"},
		{"linux", "X11/X", "TODO", "VisualID"},
		{"linux", "X11/extensions/Xdbe", "XdbeUntouched", "XdbeBackBuffer|VisualID|wchar_t"},
		{"linux", "sys/ucontext", "TODO", "TODO"},
		{"linux", "sys/ioctl", "TODO", "ioctl"},
		{"linux", "pwd", "TODO", "getpwuid|__gid_t|size_t"},
		{"linux", "sys/resource", "RUSAGE_SELF", "getrusage|__id_t|timeval"},
		{"linux", "tcl", "EXTERN|TCL_STORAGE_CLASS", "Tcl_Interp|va_list|__off_t|__mbstate_t|size_t"},
		{"linux", "sys/file", "LOCK_", "flock|__off64_t"},
		{"linux", "sys/wait", "TODO", "wait|sig_atomic_t|pid_t"},
		{"linux", "utime", "TODO", "utim|__time_t"},
		{"linux", "sys/utsname", "TODO", "name"},
		{"linux", "grp", "TODO", "gr|gid_t|size_t"},
		{"linux", "sys/statfs", "MAGIC|STAT", "statfs|__fsword_t"},
	} {
		re := regexp.MustCompile(v.os)
		if re.MatchString(runtime.GOOS) {
			header(v.nm, v.mre, v.dre)
		}
	}
}
