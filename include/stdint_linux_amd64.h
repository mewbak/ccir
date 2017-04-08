// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/stdint.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1997-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#define _STDINT_H (1)
#define __int8_t_defined
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
#define __uint32_t_defined
typedef unsigned long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
#define __intptr_t_defined
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#define INT8_MIN (-128)
#define INT16_MIN (-32768)
#define INT32_MIN (-2147483648)
#define INT64_MIN (-9223372036854775808l)
#define INT8_MAX (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647)
#define INT64_MAX (9223372036854775807l)
#define UINT8_MAX (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295u)
#define UINT64_MAX (18446744073709551615ul)
#define INT_LEAST8_MIN (-128)
#define INT_LEAST16_MIN (-32768)
#define INT_LEAST32_MIN (-2147483648)
#define INT_LEAST64_MIN (-9223372036854775808l)
#define INT_LEAST8_MAX (127)
#define INT_LEAST16_MAX (32767)
#define INT_LEAST32_MAX (2147483647)
#define INT_LEAST64_MAX (9223372036854775807l)
#define UINT_LEAST8_MAX (255)
#define UINT_LEAST16_MAX (65535)
#define UINT_LEAST32_MAX (4294967295u)
#define UINT_LEAST64_MAX (18446744073709551615ul)
#define INT_FAST8_MIN (-128)
#define INT_FAST16_MIN (-9223372036854775808l)
#define INT_FAST32_MIN (-9223372036854775808l)
#define INT_FAST64_MIN (-9223372036854775808l)
#define INT_FAST8_MAX (127)
#define INT_FAST16_MAX (9223372036854775807l)
#define INT_FAST32_MAX (9223372036854775807l)
#define INT_FAST64_MAX (9223372036854775807l)
#define UINT_FAST8_MAX (255)
#define UINT_FAST16_MAX (18446744073709551615ul)
#define UINT_FAST32_MAX (18446744073709551615ul)
#define UINT_FAST64_MAX (18446744073709551615ul)
#define INTPTR_MIN (-9223372036854775808l)
#define INTPTR_MAX (9223372036854775807l)
#define UINTPTR_MAX (18446744073709551615ul)
#define INTMAX_MIN (-9223372036854775808l)
#define INTMAX_MAX (9223372036854775807l)
#define UINTMAX_MAX (18446744073709551615ul)
#define PTRDIFF_MIN (-9223372036854775808l)
#define PTRDIFF_MAX (9223372036854775807l)
#define SIG_ATOMIC_MIN (-2147483648)
#define SIG_ATOMIC_MAX (2147483647)
#define SIZE_MAX (18446744073709551615ul)
#define WCHAR_MIN __WCHAR_MIN
#define WCHAR_MAX __WCHAR_MAX
#define WINT_MIN (0u)
#define WINT_MAX (4294967295u)
#define INT8_C(c) c
#define INT16_C(c) c
#define INT32_C(c) c
#define INT64_C(c) c ## L
#define UINT8_C(c) c
#define UINT16_C(c) c
#define UINT32_C(c) c ## U
#define UINT64_C(c) c ## UL
#define INTMAX_C(c) c ## L
#define UINTMAX_C(c) c ## UL