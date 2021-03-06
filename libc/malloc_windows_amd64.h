// Code generated by running "go generate". DO NOT EDIT.

	// +build ignore

	// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

typedef unsigned long long size_t;
typedef long long ssize_t;
typedef size_t rsize_t;
typedef long long intptr_t;
typedef unsigned long long uintptr_t;
typedef long long ptrdiff_t;
typedef unsigned short wchar_t;
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
typedef int errno_t;
typedef long __time32_t;
typedef long long __time64_t;
typedef __time64_t time_t;
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;
typedef struct localeinfo_struct {
	pthreadlocinfo locinfo;
	pthreadmbcinfo mbcinfo;
} _locale_tstruct;
typedef struct localeinfo_struct {
	pthreadlocinfo locinfo;
	pthreadmbcinfo mbcinfo;
} *_locale_t;

typedef struct tagLC_ID {
	unsigned short wLanguage;
	unsigned short wCountry;
	unsigned short wCodePage;
} LC_ID;
typedef struct tagLC_ID {
	unsigned short wLanguage;
	unsigned short wCountry;
	unsigned short wCodePage;
} *LPLC_ID;

typedef struct threadlocaleinfostruct {
	int refcount;
	unsigned int lc_codepage;
	unsigned int lc_collate_cp;
	unsigned long lc_handle[6];
	LC_ID lc_id[6];
	struct {
		char *locale;
		wchar_t *wlocale;
		int *refcount;
		int *wrefcount;
	} lc_category[6];
	int lc_clike;
	int mb_cur_max;
	int *lconv_intl_refcount;
	int *lconv_num_refcount;
	int *lconv_mon_refcount;
	struct lconv *lconv;
	int *ctype1_refcount;
	unsigned short *ctype1;
	const unsigned short *pctype;
	const unsigned char *pclmap;
	const unsigned char *pcumap;
	struct __lc_time_data *lc_time_curr;
} threadlocinfo;
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

typedef struct _heapinfo {
	int *_pentry;
	size_t _size;
	int _useflag;
} _HEAPINFO;
extern unsigned int _amblksiz;
void *calloc(size_t _NumOfElements, size_t _SizeOfElements);
void free(void *_Memory);
void *malloc(size_t _Size);
void *realloc(void *_Memory, size_t _NewSize);
void *_recalloc(void *_Memory, size_t _Count, size_t _Size);
void _aligned_free(void *_Memory);
void *_aligned_malloc(size_t _Size, size_t _Alignment);
void *_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset);
void *_aligned_realloc(void *_Memory, size_t _Size, size_t _Alignment);
void *_aligned_recalloc(void *_Memory, size_t _Count, size_t _Size, size_t _Alignment);
void *_aligned_offset_realloc(void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void *_aligned_offset_recalloc(void *_Memory, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset);
void *__mingw_aligned_malloc(size_t _Size, size_t _Alignment);
void __mingw_aligned_free(void *_Memory);
void *__mingw_aligned_offset_realloc(void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void *__mingw_aligned_realloc(void *_Memory, size_t _Size, size_t _Offset);
int _resetstkoflw(void);
unsigned long _set_malloc_crt_max_wait(unsigned long _NewValue);
void *_expand(void *_Memory, size_t _NewSize);
size_t _msize(void *_Memory);
void *_alloca(size_t _Size);
size_t _get_sbh_threshold(void);
int _set_sbh_threshold(size_t _NewValue);
errno_t _set_amblksiz(size_t _Value);
errno_t _get_amblksiz(size_t * _Value);
int _heapadd(void *_Memory, size_t _Size);
int _heapchk(void);
int _heapmin(void);
int _heapset(unsigned int _Fill);
int _heapwalk(_HEAPINFO * _EntryInfo);
size_t _heapused(size_t * _Used, size_t * _Commit);
intptr_t _get_heap_handle(void);
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __uintptr_t_defined
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define alloca _alloca
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _INTPTR_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _CRT_ALLOCATION_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret, __func, __dsttype, __dst, __type1, __arg1)
#define _SIZE_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _HEAPINFO_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _CRT_SECURE_CPP_NOTHROW throw ( )
#define _CRTRESTRICT
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3)
#define __crt_typefix(ctype)
#define _TAGLC_ID_DEFINED
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret, __func, __type1, __arg1, __type2, __arg2, __dsttype, __dst)
#define _INC_CRTDEFS
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _malloca(size) ( ( ( ( size ) + _ALLOCA_S_MARKER_SIZE ) <= _ALLOCA_S_THRESHOLD ) ? _MarkAllocaS ( _alloca ( ( size ) + _ALLOCA_S_MARKER_SIZE ) , _ALLOCA_S_STACK_MARKER ) : _MarkAllocaS ( malloc ( ( size ) + _ALLOCA_S_MARKER_SIZE ) , _ALLOCA_S_HEAP_MARKER ) )
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 )
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _HEAPBADPTR (-6)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1, __type2, __arg2)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _MM_MALLOC_H_INCLUDED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _PTRDIFF_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2)
#define _WCHAR_T_DEFINED
#define _CRTNOALIAS
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _MAX_WAIT_MALLOC_CRT (60000)
#define _FREEENTRY (0)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _TIME64_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 , __arg4_type , __arg4 )
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _MALLOC_H_
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _SSIZE_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
#define _THREADLOCALEINFO
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _ALLOCA_S_STACK_MARKER (52428)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __intptr_t_defined
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _HEAPEND (-5)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _WCTYPE_T_DEFINED
#define _UINTPTR_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _HEAPEMPTY (-1)
#define _USEDENTRY (1)
#define _HEAPBADBEGIN (-3)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _HEAP_MAXREQ (18446744073709551584ull)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret, __func, __dsttype, __src)
#define _TIME32_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _FREEA_INLINE
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3, __type4, __arg4)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _ALLOCA_S_MARKER_SIZE (16)
#define _HEAPBADNODE (-4)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _HEAPOK (-2)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _CRT_PACKING (8)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _ALLOCA_S_THRESHOLD (1024)
#define _mm_malloc(a, b) _aligned_malloc ( a , b )
#define _STATIC_ASSERT(expr) typedef char __static_assert_t [ ( expr ) ]
#define _ALLOCA_S_HEAP_MARKER (56797)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _ERRCODE_DEFINED
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst )
#define _TIME_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4)
#define _PTRDIFF_T_
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret, __func, __dsttype, __dst)
#define _RSIZE_T_DEFINED
#define _WINT_T
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\malloc.h 

#define _mm_free(a) _aligned_free ( a )
