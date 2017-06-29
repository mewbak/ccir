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
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

char *_getcwd(char *, int);
typedef unsigned long _fsize_t;
struct _finddata32_t {
	unsigned attrib;
	__time32_t time_create;
	__time32_t time_access;
	__time32_t time_write;
	_fsize_t size;
	char name[260];
};
struct _finddata32i64_t {
	unsigned attrib;
	__time32_t time_create;
	__time32_t time_access;
	__time32_t time_write;
	long long size;
	char name[260];
};
struct _finddata64i32_t {
	unsigned attrib;
	__time64_t time_create;
	__time64_t time_access;
	__time64_t time_write;
	_fsize_t size;
	char name[260];
};
struct __finddata64_t {
	unsigned attrib;
	__time64_t time_create;
	__time64_t time_access;
	__time64_t time_write;
	long long size;
	char name[260];
};
struct _wfinddata32_t {
	unsigned attrib;
	__time32_t time_create;
	__time32_t time_access;
	__time32_t time_write;
	_fsize_t size;
	wchar_t name[260];
};
struct _wfinddata32i64_t {
	unsigned attrib;
	__time32_t time_create;
	__time32_t time_access;
	__time32_t time_write;
	long long size;
	wchar_t name[260];
};
struct _wfinddata64i32_t {
	unsigned attrib;
	__time64_t time_create;
	__time64_t time_access;
	__time64_t time_write;
	_fsize_t size;
	wchar_t name[260];
};
struct _wfinddata64_t {
	unsigned attrib;
	__time64_t time_create;
	__time64_t time_access;
	__time64_t time_write;
	long long size;
	wchar_t name[260];
};
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\_mingw_off_t.h 

typedef long _off_t;
typedef long off32_t;
typedef long long _off64_t;
typedef long long off64_t;
typedef off64_t off_t;
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

int _access(const char *_Filename, int _AccessMode);
errno_t _access_s(const char *_Filename, int _AccessMode);
int _chmod(const char *_Filename, int _Mode);
int _chsize(int _FileHandle, long _Size);
errno_t _chsize_s(int _FileHandle, long long _Size);
int _close(int _FileHandle);
int _commit(int _FileHandle);
int _creat(const char *_Filename, int _PermissionMode);
int _dup(int _FileHandle);
int _dup2(int _FileHandleSrc, int _FileHandleDst);
int _eof(int _FileHandle);
long _filelength(int _FileHandle);
intptr_t _findfirst32(const char *_Filename, struct _finddata32_t *_FindData);
int _findnext32(intptr_t _FindHandle, struct _finddata32_t *_FindData);
int _findclose(intptr_t _FindHandle);
int _isatty(int _FileHandle);
int _locking(int _FileHandle, int _LockMode, long _NumOfBytes);
long _lseek(int _FileHandle, long _Offset, int _Origin);
_off64_t lseek64(int fd, _off64_t offset, int whence);
char *_mktemp(char *_TemplateName);
errno_t _mktemp_s(char *_TemplateName, size_t _Size);
int _pipe(int *_PtHandles, unsigned int _PipeSize, int _TextMode);
int _read(int _FileHandle, void *_DstBuf, unsigned int _MaxCharCount);
int remove(const char *_Filename);
int rename(const char *_OldFilename, const char *_NewFilename);
int _unlink(const char *_Filename);
int unlink(const char *_Filename);
int _setmode(int _FileHandle, int _Mode);
long _tell(int _FileHandle);
int _umask(int _Mode);
errno_t _umask_s(int _NewMode, int *_OldMode);
int _write(int _FileHandle, const void *_Buf, unsigned int _MaxCharCount);
long long _filelengthi64(int _FileHandle);
intptr_t _findfirst32i64(const char *_Filename, struct _finddata32i64_t *_FindData);
intptr_t _findfirst64(const char *_Filename, struct __finddata64_t *_FindData);
intptr_t _findfirst64i32(const char *_Filename, struct _finddata64i32_t *_FindData);
int _findnext32i64(intptr_t _FindHandle, struct _finddata32i64_t *_FindData);
int _findnext64(intptr_t _FindHandle, struct __finddata64_t *_FindData);
int _findnext64i32(intptr_t _FindHandle, struct _finddata64i32_t *_FindData);
long long _lseeki64(int _FileHandle, long long _Offset, int _Origin);
long long _telli64(int _FileHandle);
int chdir(const char *);
char *getcwd(char *, int);
int mkdir(const char *);
char *mktemp(char *);
int rmdir(const char *);
int chmod(const char *, int);
errno_t _sopen_s(int *_FileHandle, const char *_Filename, int _OpenFlag, int _ShareFlag, int _PermissionMode);
int _open(const char *_Filename, int _OpenFlag, ...);
int _sopen(const char *_Filename, int _OpenFlag, int _ShareFlag, ...);
int _waccess(const wchar_t * _Filename, int _AccessMode);
errno_t _waccess_s(const wchar_t * _Filename, int _AccessMode);
int _wchmod(const wchar_t * _Filename, int _Mode);
int _wcreat(const wchar_t * _Filename, int _PermissionMode);
intptr_t _wfindfirst32(const wchar_t * _Filename, struct _wfinddata32_t *_FindData);
int _wfindnext32(intptr_t _FindHandle, struct _wfinddata32_t *_FindData);
int _wunlink(const wchar_t * _Filename);
int _wrename(const wchar_t * _OldFilename, const wchar_t * _NewFilename);
wchar_t *_wmktemp(wchar_t * _TemplateName);
errno_t _wmktemp_s(wchar_t * _TemplateName, size_t _SizeInWords);
intptr_t _wfindfirst32i64(const wchar_t * _Filename, struct _wfinddata32i64_t *_FindData);
intptr_t _wfindfirst64i32(const wchar_t * _Filename, struct _wfinddata64i32_t *_FindData);
intptr_t _wfindfirst64(const wchar_t * _Filename, struct _wfinddata64_t *_FindData);
int _wfindnext32i64(intptr_t _FindHandle, struct _wfinddata32i64_t *_FindData);
int _wfindnext64i32(intptr_t _FindHandle, struct _wfinddata64i32_t *_FindData);
int _wfindnext64(intptr_t _FindHandle, struct _wfinddata64_t *_FindData);
errno_t _wsopen_s(int *_FileHandle, const wchar_t * _Filename, int _OpenFlag, int _ShareFlag, int _PermissionFlag);
int _wopen(const wchar_t * _Filename, int _OpenFlag, ...);
int _wsopen(const wchar_t * _Filename, int _OpenFlag, int _ShareFlag, ...);
int __lock_fhandle(int _Filehandle);
void _unlock_fhandle(int _Filehandle);
intptr_t _get_osfhandle(int _FileHandle);
int _open_osfhandle(intptr_t _OSFileHandle, int _Flags);
int access(const char *_Filename, int _AccessMode);
int chmod(const char *_Filename, int _AccessMode);
int chsize(int _FileHandle, long _Size);
int close(int _FileHandle);
int creat(const char *_Filename, int _PermissionMode);
int dup(int _FileHandle);
int dup2(int _FileHandleSrc, int _FileHandleDst);
int eof(int _FileHandle);
long filelength(int _FileHandle);
int isatty(int _FileHandle);
int locking(int _FileHandle, int _LockMode, long _NumOfBytes);
long lseek(int _FileHandle, long _Offset, int _Origin);
char *mktemp(char *_TemplateName);
int open(const char *_Filename, int _OpenFlag, ...);
int read(int _FileHandle, void *_DstBuf, unsigned int _MaxCharCount);
int setmode(int _FileHandle, int _Mode);
int sopen(const char *_Filename, int _OpenFlag, int _ShareFlag, ...);
long tell(int _FileHandle);
int umask(int _Mode);
int write(int _Filehandle, const void *_Buf, unsigned int _MaxCharCount);
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _TIME32_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\_mingw_off_t.h 

#define _OFF64_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _WCTYPE_T_DEFINED
#define _SIZE_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _WFINDDATA_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _RSIZE_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _findnext _findnext64i32
#define _findnexti64 _findnext64
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _A_HIDDEN (2)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _CRT_PACKING (8)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _wfindnext _wfindnext64i32
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 )
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\_mingw_off_t.h 

#define _FILE_OFFSET_BITS_SET_OFFT
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _TAGLC_ID_DEFINED
#define _CRT_SECURE_CPP_NOTHROW throw ( )
#define _UINTPTR_T_DEFINED
#define _WCHAR_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define F_OK (0)
#define _wfindnexti64 _wfindnext64
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\_mingw_off_t.h 

#define _OFF_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _THREADLOCALEINFO
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst)
#define _CRTNOALIAS
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret, __func, __dsttype, __src)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _IO_H_
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret, __func, __vfunc, __dsttype, __dst, __type1, __arg1, __type2, __arg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst )
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _A_RDONLY (1)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret, __func, __dsttype, __dst, __type1, __arg1)
#define _INTPTR_T_DEFINED
#define _WINT_T
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _finddata_t _finddata64i32_t
#define _A_ARCH (32)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret, __func, __dsttype, __dst, __type1, __arg1, __type2, __arg2, __type3, __arg3, __type4, __arg4)
#define _TIME64_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret, __func, __type0, __arg0, __dsttype, __dst, __type1, __arg1, __type2, __arg2)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _finddatai64_t __finddata64_t
#define _CRT_DIRECTORY_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _INC_CRTDEFS
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _FSIZE_T_DEFINED
#define lseek lseek64
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _TIME_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _FINDDATA_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\_mingw_off_t.h 

#define _OFF_T_
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _wfinddatai64_t _wfinddata64_t
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _CRTRESTRICT
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _wfindfirst _wfindfirst64i32
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __uintptr_t_defined
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define R_OK (4)
#define _A_SYSTEM (4)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __crt_typefix(ctype)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _findfirsti64 _findfirst64
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _PTRDIFF_T_
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 , __arg4_type , __arg4 )
#define _ERRCODE_DEFINED
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret, __func, __type1, __arg1, __type2, __arg2, __dsttype, __dst)
#define __intptr_t_defined
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _FILE_OFFSET_BITS_SET_LSEEK
#define _wfinddata_t _wfinddata64i32_t
#define X_OK (1)
#define W_OK (2)
#define _A_SUBDIR (16)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define _PTRDIFF_T_DEFINED
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret, __func, __dsttype, __dst)
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _A_NORMAL (0)
#define _wfindfirsti64 _wfindfirst64
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX ( __ret_type , __ret_policy , __decl_spec , __func_name , __func_name ## _s , __dst_attr , __dst_type , __dst , __arg1_type , __arg1 , __arg2_type , __arg2 , __arg3_type , __arg3 )
#define _SSIZE_T_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\io.h 

#define _findfirst _findfirst64i32
#define _WIO_DEFINED
// BEGIN OF FILE m:\mingw\x86_64-w64-mingw32\include\crtdefs.h 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3)
