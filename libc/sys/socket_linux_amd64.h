// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/sys/types.h
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
//      /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

// ----------------------------------------------------------------------------
//      /usr/include/bits/uio.h
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

// ----------------------------------------------------------------------------
//      /usr/include/sys/uio.h
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
// /usr/include/sys/types.h

typedef __loff_t loff_t;
typedef __ino64_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off64_t off_t;
typedef __off64_t off64_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __key_t key_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h

typedef long unsigned int size_t;
// /usr/include/sys/types.h

typedef char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef int register_t;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
// /usr/include/bits/uio.h

struct iovec {
	void *iov_base;
	size_t iov_len;
};
// /usr/include/sys/uio.h

extern ssize_t readv(int __fd, const struct iovec *__iovec, int __count);
extern ssize_t writev(int __fd, const struct iovec *__iovec, int __count);
// /usr/include/bits/socket.h

typedef __socklen_t socklen_t;
// /usr/include/bits/socket_type.h

enum __socket_type { SOCK_STREAM = 1, SOCK_DGRAM = 2, SOCK_RAW = 3, SOCK_RDM = 4, SOCK_SEQPACKET = 5, SOCK_DCCP = 6, SOCK_PACKET = 10, SOCK_CLOEXEC = 524288, SOCK_NONBLOCK = 2048 };
// /usr/include/bits/sockaddr.h

typedef unsigned short int sa_family_t;
// /usr/include/bits/socket.h

struct sockaddr {
	sa_family_t sa_family;
	char sa_data[14];
};
struct sockaddr_storage {
	sa_family_t ss_family;
	unsigned long int __ss_align;
	char __ss_padding[112ul];
};
enum { MSG_OOB = 1, MSG_PEEK = 2, MSG_DONTROUTE = 4, MSG_CTRUNC = 8, MSG_PROXY = 16, MSG_TRUNC = 32, MSG_DONTWAIT = 64, MSG_EOR = 128, MSG_WAITALL = 256, MSG_FIN = 512, MSG_SYN = 1024, MSG_CONFIRM = 2048, MSG_RST = 4096, MSG_ERRQUEUE = 8192, MSG_NOSIGNAL = 16384, MSG_MORE = 32768, MSG_WAITFORONE = 65536, MSG_FASTOPEN = 536870912, MSG_CMSG_CLOEXEC = 1073741824 };
struct msghdr {
	void *msg_name;
	socklen_t msg_namelen;
	struct iovec *msg_iov;
	size_t msg_iovlen;
	void *msg_control;
	size_t msg_controllen;
	int msg_flags;
};
struct cmsghdr {
	size_t cmsg_len;
	int cmsg_level;
	int cmsg_type;
	unsigned char __cmsg_data[];
};
extern struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr, struct cmsghdr *__cmsg);
enum { SCM_RIGHTS = 1 };
struct linger {
	int l_onoff;
	int l_linger;
};
// /usr/include/sys/socket.h

enum { SHUT_RD = 0, SHUT_WR, SHUT_RDWR };
extern int socket(int __domain, int __type, int __protocol);
extern int socketpair(int __domain, int __type, int __protocol, int __fds[2]);
extern int bind(int __fd, const struct sockaddr *__addr, socklen_t __len);
extern int getsockname(int __fd, struct sockaddr *__addr, socklen_t * __len);
extern int connect(int __fd, const struct sockaddr *__addr, socklen_t __len);
extern int getpeername(int __fd, struct sockaddr *__addr, socklen_t * __len);
extern ssize_t send(int __fd, const void *__buf, size_t __n, int __flags);
extern ssize_t recv(int __fd, void *__buf, size_t __n, int __flags);
extern ssize_t sendto(int __fd, const void *__buf, size_t __n, int __flags, const struct sockaddr *__addr, socklen_t __addr_len);
extern ssize_t recvfrom(int __fd, void *__buf, size_t __n, int __flags, struct sockaddr *__addr, socklen_t * __addr_len);
extern ssize_t sendmsg(int __fd, const struct msghdr *__message, int __flags);
extern ssize_t recvmsg(int __fd, struct msghdr *__message, int __flags);
extern int getsockopt(int __fd, int __level, int __optname, void *__optval, socklen_t * __optlen);
extern int setsockopt(int __fd, int __level, int __optname, const void *__optval, socklen_t __optlen);
extern int listen(int __fd, int __n);
extern int accept(int __fd, struct sockaddr *__addr, socklen_t * __addr_len);
extern int shutdown(int __fd, int __how);
#define AF_ALG PF_ALG
#define AF_APPLETALK PF_APPLETALK
#define AF_ASH PF_ASH
#define AF_ATMPVC PF_ATMPVC
#define AF_ATMSVC PF_ATMSVC
#define AF_AX25 PF_AX25
#define AF_BLUETOOTH PF_BLUETOOTH
#define AF_BRIDGE PF_BRIDGE
#define AF_CAIF PF_CAIF
#define AF_CAN PF_CAN
#define AF_DECnet PF_DECnet
#define AF_ECONET PF_ECONET
#define AF_FILE PF_FILE
#define AF_IB PF_IB
#define AF_IEEE802154 PF_IEEE802154
#define AF_INET PF_INET
#define AF_INET6 PF_INET6
#define AF_IPX PF_IPX
#define AF_IRDA PF_IRDA
#define AF_ISDN PF_ISDN
#define AF_IUCV PF_IUCV
#define AF_KEY PF_KEY
#define AF_LLC PF_LLC
#define AF_LOCAL PF_LOCAL
#define AF_MAX PF_MAX
#define AF_MPLS PF_MPLS
#define AF_NETBEUI PF_NETBEUI
#define AF_NETLINK PF_NETLINK
#define AF_NETROM PF_NETROM
#define AF_NFC PF_NFC
#define AF_PACKET PF_PACKET
#define AF_PHONET PF_PHONET
#define AF_PPPOX PF_PPPOX
#define AF_RDS PF_RDS
#define AF_ROSE PF_ROSE
#define AF_ROUTE PF_ROUTE
#define AF_RXRPC PF_RXRPC
#define AF_SECURITY PF_SECURITY
#define AF_SNA PF_SNA
#define AF_TIPC PF_TIPC
#define AF_UNIX PF_UNIX
#define AF_UNSPEC PF_UNSPEC
#define AF_VSOCK PF_VSOCK
#define AF_WANPIPE PF_WANPIPE
#define AF_X25 PF_X25
#define CMSG_ALIGN(len) ( ( ( len ) + sizeof ( size_t ) - 1 ) & ( size_t ) ~ ( sizeof ( size_t ) - 1 ) )
#define CMSG_DATA(cmsg) ( ( cmsg ) -> __cmsg_data )
#define CMSG_FIRSTHDR(mhdr) ( ( size_t ) ( mhdr ) -> msg_controllen >= sizeof ( struct cmsghdr ) ? ( struct cmsghdr * ) ( mhdr ) -> msg_control : ( struct cmsghdr * ) 0 )
#define CMSG_LEN(len) ( CMSG_ALIGN ( sizeof ( struct cmsghdr ) ) + ( len ) )
#define CMSG_NXTHDR(mhdr, cmsg) __cmsg_nxthdr ( mhdr , cmsg )
#define CMSG_SPACE(len) ( CMSG_ALIGN ( len ) + CMSG_ALIGN ( sizeof ( struct cmsghdr ) ) )
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define MSG_CONFIRM MSG_CONFIRM
#define MSG_CTRUNC MSG_CTRUNC
#define MSG_DONTROUTE MSG_DONTROUTE
#define MSG_DONTWAIT MSG_DONTWAIT
#define MSG_EOR MSG_EOR
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define MSG_FASTOPEN MSG_FASTOPEN
#define MSG_FIN MSG_FIN
#define MSG_MORE MSG_MORE
#define MSG_NOSIGNAL MSG_NOSIGNAL
#define MSG_OOB MSG_OOB
#define MSG_PEEK MSG_PEEK
#define MSG_PROXY MSG_PROXY
#define MSG_RST MSG_RST
#define MSG_SYN MSG_SYN
#define MSG_TRUNC MSG_TRUNC
#define MSG_WAITALL MSG_WAITALL
#define MSG_WAITFORONE MSG_WAITFORONE
#define PF_ALG (38)
#define PF_APPLETALK (5)
#define PF_ASH (18)
#define PF_ATMPVC (8)
#define PF_ATMSVC (20)
#define PF_AX25 (3)
#define PF_BLUETOOTH (31)
#define PF_BRIDGE (7)
#define PF_CAIF (37)
#define PF_CAN (29)
#define PF_DECnet (12)
#define PF_ECONET (19)
#define PF_FILE PF_LOCAL
#define PF_IB (27)
#define PF_IEEE802154 (36)
#define PF_INET (2)
#define PF_INET6 (10)
#define PF_IPX (4)
#define PF_IRDA (23)
#define PF_ISDN (34)
#define PF_IUCV (32)
#define PF_KEY (15)
#define PF_LLC (26)
#define PF_LOCAL (1)
#define PF_MAX (41)
#define PF_MPLS (28)
#define PF_NETBEUI (13)
#define PF_NETLINK (16)
#define PF_NETROM (6)
#define PF_NFC (39)
#define PF_PACKET (17)
#define PF_PHONET (35)
#define PF_PPPOX (24)
#define PF_RDS (21)
#define PF_ROSE (11)
#define PF_ROUTE PF_NETLINK
#define PF_RXRPC (33)
#define PF_SECURITY (14)
#define PF_SNA (22)
#define PF_TIPC (30)
#define PF_UNIX PF_LOCAL
#define PF_UNSPEC (0)
#define PF_VSOCK (40)
#define PF_WANPIPE (25)
#define PF_X25 (9)
#define SCM_RIGHTS SCM_RIGHTS
#define SCM_TIMESTAMP SO_TIMESTAMP
#define SCM_TIMESTAMPING SO_TIMESTAMPING
#define SCM_TIMESTAMPNS SO_TIMESTAMPNS
#define SCM_WIFI_STATUS SO_WIFI_STATUS
#define SHUT_RD SHUT_RD
#define SHUT_RDWR SHUT_RDWR
#define SHUT_WR SHUT_WR
#define SOCK_CLOEXEC SOCK_CLOEXEC
#define SOCK_DCCP SOCK_DCCP
#define SOCK_DGRAM SOCK_DGRAM
#define SOCK_NONBLOCK SOCK_NONBLOCK
#define SOCK_PACKET SOCK_PACKET
#define SOCK_RAW SOCK_RAW
#define SOCK_RDM SOCK_RDM
#define SOCK_SEQPACKET SOCK_SEQPACKET
#define SOCK_STREAM SOCK_STREAM
#define SOL_AAL (265)
#define SOL_ATM (264)
#define SOL_DECNET (261)
#define SOL_IRDA (266)
#define SOL_PACKET (263)
#define SOL_RAW (255)
#define SOL_SOCKET (1)
#define SOL_X25 (262)
#define SOMAXCONN (128)
#define SO_ACCEPTCONN (30)
#define SO_ATTACH_BPF (50)
#define SO_ATTACH_FILTER (26)
#define SO_BINDTODEVICE (25)
#define SO_BPF_EXTENSIONS (48)
#define SO_BROADCAST (6)
#define SO_BSDCOMPAT (14)
#define SO_BUSY_POLL (46)
#define SO_DEBUG (1)
#define SO_DETACH_BPF SO_DETACH_FILTER
#define SO_DETACH_FILTER (27)
#define SO_DOMAIN (39)
#define SO_DONTROUTE (5)
#define SO_ERROR (4)
#define SO_GET_FILTER SO_ATTACH_FILTER
#define SO_INCOMING_CPU (49)
#define SO_KEEPALIVE (9)
#define SO_LINGER (13)
#define SO_LOCK_FILTER (44)
#define SO_MARK (36)
#define SO_MAX_PACING_RATE (47)
#define SO_NOFCS (43)
#define SO_NO_CHECK (11)
#define SO_OOBINLINE (10)
#define SO_PASSCRED (16)
#define SO_PASSSEC (34)
#define SO_PEEK_OFF (42)
#define SO_PEERCRED (17)
#define SO_PEERNAME (28)
#define SO_PEERSEC (31)
#define SO_PRIORITY (12)
#define SO_PROTOCOL (38)
#define SO_RCVBUF (8)
#define SO_RCVBUFFORCE (33)
#define SO_RCVLOWAT (18)
#define SO_RCVTIMEO (20)
#define SO_REUSEADDR (2)
#define SO_REUSEPORT (15)
#define SO_RXQ_OVFL (40)
#define SO_SECURITY_AUTHENTICATION (22)
#define SO_SECURITY_ENCRYPTION_NETWORK (24)
#define SO_SECURITY_ENCRYPTION_TRANSPORT (23)
#define SO_SELECT_ERR_QUEUE (45)
#define SO_SNDBUF (7)
#define SO_SNDBUFFORCE (32)
#define SO_SNDLOWAT (19)
#define SO_SNDTIMEO (21)
#define SO_TIMESTAMP (29)
#define SO_TIMESTAMPING (37)
#define SO_TIMESTAMPNS (35)
#define SO_TYPE (3)
#define SO_WIFI_STATUS (41)
#define UIO_MAXIOV (1024)
#define _BITS_SOCKADDR_H (1)
#define _BITS_TYPES_H (1)
#define _BITS_UIO_H (1)
#define _BSD_SIZE_T_
#define _BSD_SIZE_T_DEFINED_
#define _GCC_SIZE_T
#define _SIZET_
#define _SIZE_T
#define _SIZE_T_
#define _SIZE_T_DECLARED
#define _SIZE_T_DEFINED
#define _SIZE_T_DEFINED_
#define _SS_PADSIZE ( _SS_SIZE - ( 2 * sizeof ( __ss_aligntype ) ) )
#define _SS_SIZE (128)
#define _SYS_SIZE_T_H
#define _SYS_SOCKET_H (1)
#define _SYS_TYPES_H (1)
#define _SYS_UIO_H (1)
#define _T_SIZE
#define _T_SIZE_
#define __ASM_GENERIC_SOCKET_H
#define __BITS_SOCKET_H
#define __BIT_TYPES_DEFINED__ (1)
#define __CONST_SOCKADDR_ARG const struct sockaddr *
#define __S16_TYPE short int
#define __S32_TYPE int
#define __S64_TYPE long int
#define __SIZE_T
#define __SIZE_T__
#define __SLONG32_TYPE int
#define __SLONGWORD_TYPE long int
#define __SOCKADDR_ARG struct sockaddr * __restrict
#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ## family
#define __SOCKADDR_COMMON_SIZE ( sizeof ( unsigned short int ) )
#define __SQUAD_TYPE long int
#define __SWORD_TYPE long int
#define __U16_TYPE unsigned short int
#define __U32_TYPE unsigned int
#define __U64_TYPE unsigned long int
#define __ULONG32_TYPE unsigned int
#define __ULONGWORD_TYPE unsigned long int
#define __UQUAD_TYPE unsigned long int
#define __UWORD_TYPE unsigned long int
#define ___int_size_t_h
#define __blkcnt_t_defined
#define __blksize_t_defined
#define __dev_t_defined
#define __fsblkcnt_t_defined
#define __fsfilcnt_t_defined
#define __gid_t_defined
#define __id_t_defined
#define __ino64_t_defined
#define __ino_t_defined
#define __int8_t_defined
#define __key_t_defined
#define __mode_t_defined
#define __need_clockid_t
#define __nlink_t_defined
#define __off64_t_defined
#define __off_t_defined
#define __pid_t_defined
#define __size_t
#define __size_t__
#define __socklen_t_defined
#define __ss_aligntype unsigned long int
#define __ssize_t_defined
#define __suseconds_t_defined
#define __uid_t_defined
#define __useconds_t_defined
