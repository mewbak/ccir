// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/time.h
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
//      /usr/include/sys/stat.h
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
//      /usr/include/bits/stat.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1999-2015 Free Software Foundation, Inc.
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
// /usr/include/time.h

typedef __time_t time_t;
// /usr/include/sys/stat.h

typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __ino64_t ino_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __off64_t off_t;
typedef __uid_t uid_t;
typedef __blkcnt64_t blkcnt_t;
typedef __blksize_t blksize_t;
// /usr/include/bits/stat.h

struct stat {
	__dev_t st_dev;
	__ino_t st_ino;
	__nlink_t st_nlink;
	__mode_t st_mode;
	__uid_t st_uid;
	__gid_t st_gid;
	int __pad0;
	__dev_t st_rdev;
	__off_t st_size;
	__blksize_t st_blksize;
	__blkcnt_t st_blocks;
	__time_t st_atime;
	__syscall_ulong_t st_atimensec;
	__time_t st_mtime;
	__syscall_ulong_t st_mtimensec;
	__time_t st_ctime;
	__syscall_ulong_t st_ctimensec;
	__syscall_slong_t __glibc_reserved[3];
};
struct stat64 {
	__dev_t st_dev;
	__ino64_t st_ino;
	__nlink_t st_nlink;
	__mode_t st_mode;
	__uid_t st_uid;
	__gid_t st_gid;
	int __pad0;
	__dev_t st_rdev;
	__off_t st_size;
	__blksize_t st_blksize;
	__blkcnt64_t st_blocks;
	__time_t st_atime;
	__syscall_ulong_t st_atimensec;
	__time_t st_mtime;
	__syscall_ulong_t st_mtimensec;
	__time_t st_ctime;
	__syscall_ulong_t st_ctimensec;
	__syscall_slong_t __glibc_reserved[3];
};
// /usr/include/sys/stat.h

extern int stat64(const char *__file, struct stat64 *__buf);
extern int fstat64(int __fd, struct stat64 *__buf);
extern int lstat64(const char *__file, struct stat64 *__buf);
extern int chmod(const char *__file, __mode_t __mode);
extern int fchmod(int __fd, __mode_t __mode);
extern __mode_t umask(__mode_t __mask);
extern int mkdir(const char *__path, __mode_t __mode);
extern int mknod(const char *__path, __mode_t __mode, __dev_t __dev);
extern int mkfifo(const char *__path, __mode_t __mode);
extern int __fxstat64(int __ver, int __fildes, struct stat64 *__stat_buf);
extern int __xstat64(int __ver, const char *__filename, struct stat64 *__stat_buf);
extern int __lxstat64(int __ver, const char *__filename, struct stat64 *__stat_buf);
extern int __fxstatat64(int __ver, int __fildes, const char *__filename, struct stat64 *__stat_buf, int __flag);
extern int __xmknod(int __ver, const char *__path, __mode_t __mode, __dev_t * __dev);
extern int __xmknodat(int __ver, int __fd, const char *__path, __mode_t __mode, __dev_t * __dev);

// /usr/include/sys/stat.h 

#define S_IRWXG (56)

// /usr/include/bits/types.h 

#define __SWORD_TYPE long int

// /usr/include/bits/stat.h 

#define __S_ISUID (2048)
#define _STATBUF_ST_NSEC

// /usr/include/bits/types.h 

#define __ULONG32_TYPE unsigned int

// /usr/include/sys/stat.h 

#define fstat fstat64

// /usr/include/bits/types.h 

#define __SLONGWORD_TYPE long int

// /usr/include/sys/stat.h 

#define __mode_t_defined

// /usr/include/bits/types.h 

#define __SLONG32_TYPE int

// /usr/include/sys/stat.h 

#define S_ISUID __S_ISUID

// /usr/include/bits/types.h 

#define __U16_TYPE unsigned short int
#define __U32_TYPE unsigned int

// /usr/include/sys/stat.h 

#define __blkcnt_t_defined
#define S_ISREG(mode) __S_ISTYPE ( ( mode ) , __S_IFREG )
#define S_IFBLK __S_IFBLK

// /usr/include/bits/stat.h 

#define __S_IFMT (61440)

// /usr/include/sys/stat.h 

#define S_ISFIFO(mode) __S_ISTYPE ( ( mode ) , __S_IFIFO )
#define __fxstat __fxstat64
#define __uid_t_defined
#define S_IFMT __S_IFMT

// /usr/include/bits/stat.h 

#define __S_IFSOCK (49152)
#define __S_IFCHR (8192)
#define _STATBUF_ST_RDEV

// /usr/include/sys/stat.h 

#define S_TYPEISSHM(buf) __S_TYPEISSHM ( buf )
#define S_IRUSR __S_IREAD

// /usr/include/bits/stat.h 

#define _STAT_VER_LINUX (1)

// /usr/include/sys/stat.h 

#define S_ISDIR(mode) __S_ISTYPE ( ( mode ) , __S_IFDIR )

// /usr/include/bits/stat.h 

#define __S_ISGID (1024)

// /usr/include/sys/stat.h 

#define __ino_t_defined
#define __xstat __xstat64

// /usr/include/bits/types.h 

#define __ULONGWORD_TYPE unsigned long int
#define __S64_TYPE long int

// /usr/include/sys/stat.h 

#define S_IWUSR __S_IWRITE

// /usr/include/bits/stat.h 

#define _STAT_VER_KERNEL (0)

// /usr/include/bits/types.h 

#define __SQUAD_TYPE long int

// /usr/include/sys/stat.h 

#define S_ISVTX __S_ISVTX
#define stat stat64

// /usr/include/bits/types.h 

#define __S16_TYPE short int

// /usr/include/sys/stat.h 

#define S_ISGID __S_ISGID
#define S_IFLNK __S_IFLNK

// /usr/include/bits/stat.h 

#define __S_IEXEC (64)
#define __S_TYPEISMQ(buf) ( ( buf ) -> st_mode - ( buf ) -> st_mode )
#define _STAT_VER _STAT_VER_LINUX

// /usr/include/sys/stat.h 

#define S_TYPEISMQ(buf) __S_TYPEISMQ ( buf )
#define S_IRWXU (448)

// /usr/include/bits/stat.h 

#define __S_TYPEISSEM(buf) ( ( buf ) -> st_mode - ( buf ) -> st_mode )

// /usr/include/sys/stat.h 

#define S_IXGRP (8)
#define __S_ISTYPE(mode, mask) ( ( ( mode ) & __S_IFMT ) == ( mask ) )
#define S_IXUSR __S_IEXEC
#define S_IWGRP (16)

// /usr/include/bits/stat.h 

#define __S_IREAD (256)

// /usr/include/bits/types.h 

#define __UQUAD_TYPE unsigned long int

// /usr/include/sys/stat.h 

#define S_IRGRP (32)

// /usr/include/bits/stat.h 

#define __S_IFLNK (40960)

// /usr/include/sys/stat.h 

#define __off_t_defined
#define __gid_t_defined
#define S_IFDIR __S_IFDIR
#define S_IFCHR __S_IFCHR
#define S_IRWXO (7)

// /usr/include/bits/stat.h 

#define __S_ISVTX (512)

// /usr/include/bits/types.h 

#define __UWORD_TYPE unsigned long int

// /usr/include/sys/stat.h 

#define lstat lstat64

// /usr/include/bits/types.h 

#define __U64_TYPE unsigned long int

// /usr/include/bits/stat.h 

#define _MKNOD_VER_LINUX (0)

// /usr/include/sys/stat.h 

#define __nlink_t_defined
#define S_IFIFO __S_IFIFO
#define __blksize_t_defined
#define S_ISSOCK(mode) __S_ISTYPE ( ( mode ) , __S_IFSOCK )
#define S_IROTH (4)
#define S_IXOTH (1)

// /usr/include/bits/stat.h 

#define __S_IFBLK (24576)
#define __S_IFIFO (4096)

// /usr/include/sys/stat.h 

#define S_ISBLK(mode) __S_ISTYPE ( ( mode ) , __S_IFBLK )

// /usr/include/bits/stat.h 

#define __S_IFREG (32768)
#define _BITS_STAT_H (1)
#define __S_IFDIR (16384)

// /usr/include/sys/stat.h 

#define S_IFSOCK __S_IFSOCK

// /usr/include/bits/types.h 

#define __S32_TYPE int

// /usr/include/sys/stat.h 

#define S_TYPEISSEM(buf) __S_TYPEISSEM ( buf )

// /usr/include/bits/stat.h 

#define __S_TYPEISSHM(buf) ( ( buf ) -> st_mode - ( buf ) -> st_mode )
#define _STATBUF_ST_BLKSIZE

// /usr/include/sys/stat.h 

#define _MKNOD_VER (0)
#define S_IFREG __S_IFREG
#define __dev_t_defined
#define _SYS_STAT_H (1)

// /usr/include/time.h 

#define __time_t_defined (1)

// /usr/include/sys/stat.h 

#define S_ISLNK(mode) __S_ISTYPE ( ( mode ) , __S_IFLNK )

// /usr/include/bits/stat.h 

#define __S_IWRITE (128)

// /usr/include/sys/stat.h 

#define S_ISCHR(mode) __S_ISTYPE ( ( mode ) , __S_IFCHR )
#define S_IWOTH (2)

// /usr/include/bits/types.h 

#define _BITS_TYPES_H (1)

// /usr/include/sys/stat.h 

#define __lxstat __lxstat64
