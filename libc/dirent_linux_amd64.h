// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/dirent.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1991-2015 Free Software Foundation, Inc.
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

// ----------------------------------------------------------------------------
//      /usr/include/bits/dirent.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1996-2015 Free Software Foundation, Inc.
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

typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct {
	int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
// /usr/include/dirent.h

typedef __ino64_t ino_t;
typedef __ino64_t ino64_t;
// /usr/include/bits/dirent.h

struct dirent {
	__ino64_t d_ino;
	__off64_t d_off;
	unsigned short int d_reclen;
	unsigned char d_type;
	char d_name[256];
};
struct dirent64 {
	__ino64_t d_ino;
	__off64_t d_off;
	unsigned short int d_reclen;
	unsigned char d_type;
	char d_name[256];
};
// /usr/include/dirent.h

typedef struct __dirstream DIR;
extern DIR *opendir(const char *__name);
extern int closedir(DIR * __dirp);
extern struct dirent64 *readdir64(DIR * __dirp);
extern int readdir64_r(DIR * __dirp, struct dirent64 *__entry, struct dirent64 **__result);
extern void rewinddir(DIR * __dirp);
extern void seekdir(DIR * __dirp, long int __pos);
extern long int telldir(DIR * __dirp);
#define _BITS_TYPES_H (1)
#define _DIRENT_H (1)
#define _DIRENT_HAVE_D_OFF
#define _DIRENT_HAVE_D_RECLEN
#define _DIRENT_HAVE_D_TYPE
#define _DIRENT_MATCHES_DIRENT64 (1)
#define _D_ALLOC_NAMLEN(d) ( ( ( char * ) ( d ) + ( d ) -> d_reclen ) - & ( d ) -> d_name [ 0 ] )
#define _D_EXACT_NAMLEN(d) ( strlen ( ( d ) -> d_name ) )
#define __S16_TYPE short int
#define __S32_TYPE int
#define __S64_TYPE long int
#define __SLONG32_TYPE int
#define __SLONGWORD_TYPE long int
#define __SQUAD_TYPE long int
#define __SWORD_TYPE long int
#define __U16_TYPE unsigned short int
#define __U32_TYPE unsigned int
#define __U64_TYPE unsigned long int
#define __ULONG32_TYPE unsigned int
#define __ULONGWORD_TYPE unsigned long int
#define __UQUAD_TYPE unsigned long int
#define __UWORD_TYPE unsigned long int
#define __ino64_t_defined
#define __ino_t_defined
#define d_fileno d_ino
#define readdir readdir64
#define readdir_r readdir64_r
