// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/stdint.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1997-2015 Free Software Foundation, Inc.
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

// ----------------------------------------------------------------------------
//      /usr/include/netinet/in.h
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

typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
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
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
// /usr/include/bits/types.h

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
// /usr/include/netinet/in.h

typedef uint32_t in_addr_t;
struct in_addr {
	in_addr_t s_addr;
};
enum { IPPROTO_IP = 0, IPPROTO_ICMP = 1, IPPROTO_IGMP = 2, IPPROTO_IPIP = 4, IPPROTO_TCP = 6, IPPROTO_EGP = 8, IPPROTO_PUP = 12, IPPROTO_UDP = 17, IPPROTO_IDP = 22, IPPROTO_TP = 29, IPPROTO_DCCP = 33, IPPROTO_IPV6 = 41, IPPROTO_RSVP = 46, IPPROTO_GRE = 47, IPPROTO_ESP = 50, IPPROTO_AH = 51, IPPROTO_MTP = 92, IPPROTO_BEETPH = 94, IPPROTO_ENCAP = 98, IPPROTO_PIM = 103, IPPROTO_COMP = 108, IPPROTO_SCTP = 132, IPPROTO_UDPLITE = 136, IPPROTO_RAW = 255, IPPROTO_MAX };
enum { IPPROTO_HOPOPTS = 0, IPPROTO_ROUTING = 43, IPPROTO_FRAGMENT = 44, IPPROTO_ICMPV6 = 58, IPPROTO_NONE = 59, IPPROTO_DSTOPTS = 60, IPPROTO_MH = 135 };
typedef uint16_t in_port_t;
enum { IPPORT_ECHO = 7, IPPORT_DISCARD = 9, IPPORT_SYSTAT = 11, IPPORT_DAYTIME = 13, IPPORT_NETSTAT = 15, IPPORT_FTP = 21, IPPORT_TELNET = 23, IPPORT_SMTP = 25, IPPORT_TIMESERVER = 37, IPPORT_NAMESERVER = 42, IPPORT_WHOIS = 43, IPPORT_MTP = 57, IPPORT_TFTP = 69, IPPORT_RJE = 77, IPPORT_FINGER = 79, IPPORT_TTYLINK = 87, IPPORT_SUPDUP = 95, IPPORT_EXECSERVER = 512, IPPORT_LOGINSERVER = 513, IPPORT_CMDSERVER = 514, IPPORT_EFSSERVER = 520, IPPORT_BIFFUDP = 512, IPPORT_WHOSERVER = 513, IPPORT_ROUTESERVER = 520, IPPORT_RESERVED = 1024, IPPORT_USERRESERVED = 5000 };
struct in6_addr {
	union {
		uint8_t __u6_addr8[16];
	} __in6_u;
};
extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
struct sockaddr_in {
	sa_family_t sin_family;
	in_port_t sin_port;
	struct in_addr sin_addr;
	unsigned char sin_zero[8ul];
};
struct sockaddr_in6 {
	sa_family_t sin6_family;
	in_port_t sin6_port;
	uint32_t sin6_flowinfo;
	struct in6_addr sin6_addr;
	uint32_t sin6_scope_id;
};
struct ipv6_mreq {
	struct in6_addr ipv6mr_multiaddr;
	unsigned int ipv6mr_interface;
};
extern uint32_t ntohl(uint32_t __netlong);
extern uint16_t ntohs(uint16_t __netshort);
extern uint32_t htonl(uint32_t __hostlong);
extern uint16_t htons(uint16_t __hostshort);

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _GCC_SIZE_T

// /usr/include/sys/types.h 

#define __off64_t_defined

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_UNSPECIFIED(a) ( ( ( const uint32_t * ) ( a ) ) [ 0 ] == 0 && ( ( const uint32_t * ) ( a ) ) [ 1 ] == 0 && ( ( const uint32_t * ) ( a ) ) [ 2 ] == 0 && ( ( const uint32_t * ) ( a ) ) [ 3 ] == 0 )

// /usr/include/bits/socket.h 

#define MSG_CONFIRM MSG_CONFIRM

// /usr/include/netinet/in.h 

#define IPPROTO_ESP IPPROTO_ESP

// /usr/include/bits/socket.h 

#define __BITS_SOCKET_H
#define AF_SNA PF_SNA

// /usr/include/netinet/in.h 

#define IN_CLASSB_NET (4294901760u)

// /usr/include/bits/socket.h 

#define AF_MPLS PF_MPLS

// /usr/include/netinet/in.h 

#define IPPROTO_COMP IPPROTO_COMP

// /usr/include/bits/socket.h 

#define AF_UNIX PF_UNIX
#define MSG_ERRQUEUE MSG_ERRQUEUE
#define AF_NETBEUI PF_NETBEUI
#define AF_CAN PF_CAN
#define MSG_WAITFORONE MSG_WAITFORONE
#define CMSG_ALIGN(len) ( ( ( len ) + sizeof ( size_t ) - 1 ) & ( size_t ) ~ ( sizeof ( size_t ) - 1 ) )
#define AF_ISDN PF_ISDN

// /usr/include/sys/types.h 

#define __blksize_t_defined

// /usr/include/stdint.h 

#define INT_LEAST32_MIN (-2147483648)

// /usr/include/netinet/in.h 

#define IPPROTO_NONE IPPROTO_NONE

// /usr/include/bits/socket.h 

#define MSG_FIN MSG_FIN

// /usr/include/netinet/in.h 

#define IN_CLASSD(a) ( ( ( ( in_addr_t ) ( a ) ) & 0xf0000000 ) == 0xe0000000 )

// /usr/include/bits/socket.h 

#define SOL_ATM (264)

// /usr/include/stdint.h 

#define INT_FAST64_MAX (9223372036854775807l)
#define INT_FAST32_MIN (-9223372036854775808l)

// /usr/include/bits/socket.h 

#define PF_ASH (18)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _SIZE_T_DEFINED_

// /usr/include/bits/socket.h 

#define _SS_SIZE (128)

// /usr/include/netinet/in.h 

#define IPPROTO_ROUTING IPPROTO_ROUTING

// /usr/include/stdint.h 

#define INT_LEAST64_MIN (-9223372036854775808l)

// /usr/include/netinet/in.h 

#define IN_CLASSB_HOST (65535u)
#define IPPROTO_DCCP IPPROTO_DCCP

// /usr/include/bits/socket.h 

#define PF_AX25 (3)

// /usr/include/stdint.h 

#define PTRDIFF_MAX (9223372036854775807l)

// /usr/include/bits/socket.h 

#define AF_UNSPEC PF_UNSPEC

// /usr/include/stdint.h 

#define UINT_FAST16_MAX (18446744073709551615ul)
#define INTPTR_MAX (9223372036854775807l)

// /usr/include/bits/socket.h 

#define CMSG_LEN(len) ( CMSG_ALIGN ( sizeof ( struct cmsghdr ) ) + ( len ) )

// /usr/include/stdint.h 

#define INT32_C(c) c

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _SIZE_T

// /usr/include/stdint.h 

#define __int8_t_defined

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _SIZET_

// /usr/include/sys/socket.h 

#define __SOCKADDR_ARG struct sockaddr * __restrict

// /usr/include/bits/socket.h 

#define AF_IRDA PF_IRDA

// /usr/include/stdint.h 

#define UINT_FAST8_MAX (255)
#define UINT64_MAX (18446744073709551615ul)

// /usr/include/sys/types.h 

#define __pid_t_defined

// /usr/include/bits/socket.h 

#define PF_DECnet (12)
#define __ss_aligntype unsigned long int

// /usr/include/sys/types.h 

#define __uid_t_defined

// /usr/include/stdint.h 

#define INT64_C(c) c ## L

// /usr/include/netinet/in.h 

#define INADDR_LOOPBACK ( ( in_addr_t ) 0x7f000001 )

// /usr/include/bits/socket.h 

#define MSG_WAITALL MSG_WAITALL
#define PF_SECURITY (14)

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_V4MAPPED(a) ( ( ( ( const uint32_t * ) ( a ) ) [ 0 ] == 0 ) && ( ( ( const uint32_t * ) ( a ) ) [ 1 ] == 0 ) && ( ( ( const uint32_t * ) ( a ) ) [ 2 ] == htonl ( 0xffff ) ) )

// /usr/include/bits/socket.h 

#define PF_UNSPEC (0)
#define AF_NETROM PF_NETROM

// /usr/include/netinet/in.h 

#define INET6_ADDRSTRLEN (46)

// /usr/include/sys/types.h 

#define __suseconds_t_defined

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_MC_NODELOCAL(a) ( IN6_IS_ADDR_MULTICAST ( a ) && ( ( ( ( const uint8_t * ) ( a ) ) [ 1 ] & 0xf ) == 0x1 ) )

// /usr/include/sys/types.h 

#define __ino64_t_defined

// /usr/include/stdint.h 

#define _STDINT_H (1)

// /usr/include/bits/socket.h 

#define AF_SECURITY PF_SECURITY
#define PF_IPX (4)
#define CMSG_DATA(cmsg) ( ( cmsg ) -> __cmsg_data )

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define __SIZE_T__

// /usr/include/bits/socket.h 

#define AF_INET6 PF_INET6

// /usr/include/stdint.h 

#define UINT_LEAST16_MAX (65535)
#define UINTMAX_C(c) c ## UL

// /usr/include/bits/socket.h 

#define AF_ROSE PF_ROSE

// /usr/include/stdint.h 

#define INT_LEAST8_MIN (-128)

// /usr/include/sys/types.h 

#define __fsblkcnt_t_defined

// /usr/include/bits/socket.h 

#define AF_X25 PF_X25

// /usr/include/netinet/in.h 

#define IN6ADDR_ANY_INIT { { { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } } }

// /usr/include/bits/socket.h 

#define PF_PHONET (35)

// /usr/include/netinet/in.h 

#define INADDR_ANY ( ( in_addr_t ) 0x00000000 )
#define IPPROTO_UDP IPPROTO_UDP
#define IN_CLASSB(a) ( ( ( ( in_addr_t ) ( a ) ) & 0xc0000000 ) == 0x80000000 )

// /usr/include/bits/socket.h 

#define PF_ATMPVC (8)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _T_SIZE

// /usr/include/stdint.h 

#define SIZE_MAX (18446744073709551615ul)

// /usr/include/bits/types.h 

#define __SQUAD_TYPE long int

// /usr/include/netinet/in.h 

#define IPPROTO_ENCAP IPPROTO_ENCAP

// /usr/include/stdint.h 

#define UINT16_MAX (65535)

// /usr/include/bits/types.h 

#define __ULONG32_TYPE unsigned int

// /usr/include/bits/socket.h 

#define PF_NETLINK (16)
#define PF_ISDN (34)
#define MSG_EOR MSG_EOR

// /usr/include/netinet/in.h 

#define IPPROTO_FRAGMENT IPPROTO_FRAGMENT

// /usr/include/stdint.h 

#define INT_LEAST32_MAX (2147483647)

// /usr/include/bits/sockaddr.h 

#define __SOCKADDR_COMMON(sa_prefix) sa_family_t sa_prefix ## family

// /usr/include/stdint.h 

#define INT_FAST8_MIN (-128)

// /usr/include/sys/socket.h 

#define SHUT_WR SHUT_WR

// /usr/include/netinet/in.h 

#define IPPROTO_GRE IPPROTO_GRE

// /usr/include/bits/socket.h 

#define AF_ALG PF_ALG
#define AF_MAX PF_MAX

// /usr/include/stdint.h 

#define INT_FAST8_MAX (127)

// /usr/include/bits/socket.h 

#define PF_IB (27)
#define MSG_DONTROUTE MSG_DONTROUTE
#define AF_TIPC PF_TIPC
#define AF_LLC PF_LLC

// /usr/include/stdint.h 

#define UINT_LEAST64_MAX (18446744073709551615ul)
#define INT_LEAST16_MAX (32767)

// /usr/include/bits/socket.h 

#define AF_BLUETOOTH PF_BLUETOOTH

// /usr/include/stdint.h 

#define WINT_MAX (4294967295u)

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_LOOPBACK(a) ( ( ( const uint32_t * ) ( a ) ) [ 0 ] == 0 && ( ( const uint32_t * ) ( a ) ) [ 1 ] == 0 && ( ( const uint32_t * ) ( a ) ) [ 2 ] == 0 && ( ( const uint32_t * ) ( a ) ) [ 3 ] == htonl ( 1 ) )
#define IPPROTO_TCP IPPROTO_TCP

// /usr/include/bits/socket.h 

#define PF_IRDA (23)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define __size_t__

// /usr/include/netinet/in.h 

#define INADDR_MAX_LOCAL_GROUP ( ( in_addr_t ) 0xe00000ff )
#define IN6_IS_ADDR_SITELOCAL(a) ( ( ( ( const uint32_t * ) ( a ) ) [ 0 ] & htonl ( 0xffc00000 ) ) == htonl ( 0xfec00000 ) )

// /usr/include/bits/socket.h 

#define PF_NETBEUI (13)
#define MSG_RST MSG_RST

// /usr/include/netinet/in.h 

#define IPPROTO_UDPLITE IPPROTO_UDPLITE
#define s6_addr __in6_u . __u6_addr8

// /usr/include/sys/types.h 

#define __key_t_defined

// /usr/include/stdint.h 

#define INT_LEAST16_MIN (-32768)

// /usr/include/bits/socket.h 

#define AF_LOCAL PF_LOCAL

// /usr/include/netinet/in.h 

#define IN_CLASSB_MAX (65536)

// /usr/include/bits/sockaddr.h 

#define _BITS_SOCKADDR_H (1)

// /usr/include/bits/socket.h 

#define AF_APPLETALK PF_APPLETALK

// /usr/include/netinet/in.h 

#define IPPROTO_IPIP IPPROTO_IPIP

// /usr/include/sys/socket.h 

#define SHUT_RDWR SHUT_RDWR

// /usr/include/bits/socket.h 

#define AF_FILE PF_FILE

// /usr/include/stdint.h 

#define UINTPTR_MAX (18446744073709551615ul)
#define UINT8_C(c) c
#define SIG_ATOMIC_MIN (-2147483648)

// /usr/include/bits/types.h 

#define __SWORD_TYPE long int

// /usr/include/bits/socket.h 

#define CMSG_FIRSTHDR(mhdr) ( ( size_t ) ( mhdr ) -> msg_controllen >= sizeof ( struct cmsghdr ) ? ( struct cmsghdr * ) ( mhdr ) -> msg_control : ( struct cmsghdr * ) 0 )
#define MSG_DONTWAIT MSG_DONTWAIT

// /usr/include/bits/types.h 

#define __SLONGWORD_TYPE long int
#define __SLONG32_TYPE int

// /usr/include/stdint.h 

#define INTMAX_C(c) c ## L

// /usr/include/bits/socket.h 

#define AF_RXRPC PF_RXRPC

// /usr/include/stdint.h 

#define INT8_MIN (-128)

// /usr/include/bits/socket.h 

#define PF_MPLS (28)

// /usr/include/netinet/in.h 

#define IPPROTO_TP IPPROTO_TP

// /usr/include/stdint.h 

#define INTMAX_MIN (-9223372036854775808l)

// /usr/include/netinet/in.h 

#define IN_CLASSA(a) ( ( ( ( in_addr_t ) ( a ) ) & 0x80000000 ) == 0 )

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _SIZE_T_DEFINED

// /usr/include/sys/types.h 

#define __nlink_t_defined

// /usr/include/bits/socket.h 

#define AF_IB PF_IB
#define PF_INET (2)
#define AF_KEY PF_KEY

// /usr/include/netinet/in.h 

#define IPPROTO_BEETPH IPPROTO_BEETPH

// /usr/include/bits/socket.h 

#define PF_ECONET (19)

// /usr/include/netinet/in.h 

#define IN_CLASSA_MAX (128)
#define IN_EXPERIMENTAL(a) ( ( ( ( in_addr_t ) ( a ) ) & 0xe0000000 ) == 0xe0000000 )

// /usr/include/bits/socket.h 

#define MSG_MORE MSG_MORE

// /usr/include/bits/uio.h 

#define _BITS_UIO_H (1)

// /usr/include/bits/types.h 

#define _BITS_TYPES_H (1)

// /usr/include/netinet/in.h 

#define IPPROTO_AH IPPROTO_AH

// /usr/include/bits/socket.h 

#define PF_NETROM (6)
#define _SS_PADSIZE ( _SS_SIZE - ( 2 * sizeof ( __ss_aligntype ) ) )

// /usr/include/stdint.h 

#define UINT_FAST32_MAX (18446744073709551615ul)

// /usr/include/bits/socket.h 

#define PF_UNIX PF_LOCAL
#define AF_IPX PF_IPX

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_MC_GLOBAL(a) ( IN6_IS_ADDR_MULTICAST ( a ) && ( ( ( ( const uint8_t * ) ( a ) ) [ 1 ] & 0xf ) == 0xe ) )

// /usr/include/bits/socket.h 

#define __socklen_t_defined

// /usr/include/sys/socket.h 

#define SHUT_RD SHUT_RD

// /usr/include/bits/types.h 

#define __S64_TYPE long int

// /usr/include/stdint.h 

#define INT_FAST64_MIN (-9223372036854775808l)

// /usr/include/netinet/in.h 

#define IPPROTO_EGP IPPROTO_EGP

// /usr/include/bits/socket.h 

#define PF_IEEE802154 (36)

// /usr/include/stdint.h 

#define INT32_MAX (2147483647)

// /usr/include/bits/socket.h 

#define SOL_RAW (255)

// /usr/include/netinet/in.h 

#define IN6ADDR_LOOPBACK_INIT { { { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } } }
#define IPPROTO_HOPOPTS IPPROTO_HOPOPTS

// /usr/include/bits/socket.h 

#define MSG_PEEK MSG_PEEK

// /usr/include/stdint.h 

#define UINT8_MAX (255)
#define INT16_MAX (32767)

// /usr/include/bits/socket.h 

#define AF_AX25 PF_AX25

// /usr/include/netinet/in.h 

#define IN_CLASSC_HOST (255u)

// /usr/include/bits/types.h 

#define __ULONGWORD_TYPE unsigned long int

// /usr/include/netinet/in.h 

#define INADDR_ALLRTRS_GROUP ( ( in_addr_t ) 0xe0000002 )

// /usr/include/bits/socket.h 

#define PF_APPLETALK (5)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define ___int_size_t_h

// /usr/include/stdint.h 

#define INT_LEAST64_MAX (9223372036854775807l)
#define INT8_MAX (127)
#define INT_FAST16_MAX (9223372036854775807l)
#define UINT32_MAX (4294967295u)

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_MULTICAST(a) ( ( ( const uint8_t * ) ( a ) ) [ 0 ] == 0xff )
#define IN_BADCLASS(a) ( ( ( ( in_addr_t ) ( a ) ) & 0xf0000000 ) == 0xf0000000 )

// /usr/include/bits/socket.h 

#define PF_MAX (41)
#define PF_IUCV (32)
#define AF_WANPIPE PF_WANPIPE
#define PF_BLUETOOTH (31)

// /usr/include/sys/types.h 

#define __off_t_defined
#define __useconds_t_defined

// /usr/include/netinet/in.h 

#define INADDR_ALLHOSTS_GROUP ( ( in_addr_t ) 0xe0000001 )
#define IN6_IS_ADDR_LINKLOCAL(a) ( ( ( ( const uint32_t * ) ( a ) ) [ 0 ] & htonl ( 0xffc00000 ) ) == htonl ( 0xfe800000 ) )
#define IPPROTO_IP IPPROTO_IP

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define __size_t

// /usr/include/stdint.h 

#define WINT_MIN (0u)

// /usr/include/netinet/in.h 

#define IPPROTO_SCTP IPPROTO_SCTP

// /usr/include/bits/socket.h 

#define MSG_PROXY MSG_PROXY
#define AF_IUCV PF_IUCV

// /usr/include/netinet/in.h 

#define IPPROTO_RSVP IPPROTO_RSVP

// /usr/include/bits/socket.h 

#define MSG_SYN MSG_SYN

// /usr/include/stdint.h 

#define INT_FAST16_MIN (-9223372036854775808l)

// /usr/include/bits/socket.h 

#define AF_CAIF PF_CAIF

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_MC_LINKLOCAL(a) ( IN6_IS_ADDR_MULTICAST ( a ) && ( ( ( ( const uint8_t * ) ( a ) ) [ 1 ] & 0xf ) == 0x2 ) )
#define IPPROTO_MTP IPPROTO_MTP

// /usr/include/stdint.h 

#define INTMAX_MAX (9223372036854775807l)
#define SIG_ATOMIC_MAX (2147483647)

// /usr/include/netinet/in.h 

#define IPPROTO_PIM IPPROTO_PIM

// /usr/include/sys/types.h 

#define __blkcnt_t_defined
#define __BIT_TYPES_DEFINED__ (1)

// /usr/include/netinet/in.h 

#define INADDR_BROADCAST ( ( in_addr_t ) 0xffffffff )

// /usr/include/bits/types.h 

#define __U64_TYPE unsigned long int

// /usr/include/stdint.h 

#define UINT_FAST64_MAX (18446744073709551615ul)

// /usr/include/bits/socket.h 

#define PF_PACKET (17)
#define MSG_CMSG_CLOEXEC MSG_CMSG_CLOEXEC
#define AF_ECONET PF_ECONET

// /usr/include/sys/types.h 

#define __id_t_defined

// /usr/include/bits/socket.h 

#define MSG_NOSIGNAL MSG_NOSIGNAL

// /usr/include/stdint.h 

#define UINTMAX_MAX (18446744073709551615ul)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define __SIZE_T

// /usr/include/sys/types.h 

#define __fsfilcnt_t_defined

// /usr/include/bits/types.h 

#define __S32_TYPE int

// /usr/include/netinet/in.h 

#define IPPROTO_DSTOPTS IPPROTO_DSTOPTS
#define IN_CLASSA_HOST (16777215u)

// /usr/include/bits/socket.h 

#define AF_PPPOX PF_PPPOX
#define AF_DECnet PF_DECnet

// /usr/include/stdint.h 

#define WCHAR_MIN __WCHAR_MIN

// /usr/include/bits/socket.h 

#define AF_IEEE802154 PF_IEEE802154
#define PF_LLC (26)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _BSD_SIZE_T_

// /usr/include/sys/socket.h 

#define __CONST_SOCKADDR_ARG const struct sockaddr *

// /usr/include/bits/socket.h 

#define PF_FILE PF_LOCAL
#define PF_ROSE (11)

// /usr/include/stdint.h 

#define INT_LEAST8_MAX (127)

// /usr/include/bits/socket.h 

#define MSG_CTRUNC MSG_CTRUNC
#define AF_ATMSVC PF_ATMSVC
#define PF_CAIF (37)
#define PF_PPPOX (24)
#define AF_BRIDGE PF_BRIDGE

// /usr/include/stdint.h 

#define INT8_C(c) c

// /usr/include/netinet/in.h 

#define IN_CLASSC_NSHIFT (8)

// /usr/include/bits/socket.h 

#define AF_PACKET PF_PACKET

// /usr/include/stdint.h 

#define PTRDIFF_MIN (-9223372036854775808l)

// /usr/include/bits/socket.h 

#define SCM_RIGHTS SCM_RIGHTS

// /usr/include/netinet/in.h 

#define IN_CLASSC(a) ( ( ( ( in_addr_t ) ( a ) ) & 0xe0000000 ) == 0xc0000000 )

// /usr/include/bits/socket.h 

#define MSG_FASTOPEN MSG_FASTOPEN

// /usr/include/stdint.h 

#define UINT16_C(c) c

// /usr/include/bits/socket.h 

#define AF_VSOCK PF_VSOCK

// /usr/include/netinet/in.h 

#define IN_CLASSB_NSHIFT (16)

// /usr/include/sys/types.h 

#define __ssize_t_defined

// /usr/include/bits/socket.h 

#define MSG_OOB MSG_OOB

// /usr/include/stdint.h 

#define WCHAR_MAX __WCHAR_MAX
#define __intptr_t_defined

// /usr/include/sys/types.h 

#define __mode_t_defined

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _T_SIZE_

// /usr/include/netinet/in.h 

#define IPPROTO_IGMP IPPROTO_IGMP

// /usr/include/stdint.h 

#define INT64_MAX (9223372036854775807l)

// /usr/include/netinet/in.h 

#define INET_ADDRSTRLEN (16)
#define IPPROTO_ICMP IPPROTO_ICMP

// /usr/include/stdint.h 

#define UINT_LEAST8_MAX (255)
#define INT64_MIN (-9223372036854775808l)

// /usr/include/bits/socket.h 

#define AF_PHONET PF_PHONET
#define SOMAXCONN (128)

// /usr/include/netinet/in.h 

#define INADDR_UNSPEC_GROUP ( ( in_addr_t ) 0xe0000000 )

// /usr/include/stdint.h 

#define INT16_MIN (-32768)

// /usr/include/bits/socket.h 

#define SOL_AAL (265)

// /usr/include/netinet/in.h 

#define IN6_ARE_ADDR_EQUAL(a, b) ( ( ( ( const uint32_t * ) ( a ) ) [ 0 ] == ( ( const uint32_t * ) ( b ) ) [ 0 ] ) && ( ( ( const uint32_t * ) ( a ) ) [ 1 ] == ( ( const uint32_t * ) ( b ) ) [ 1 ] ) && ( ( ( const uint32_t * ) ( a ) ) [ 2 ] == ( ( const uint32_t * ) ( b ) ) [ 2 ] ) && ( ( ( const uint32_t * ) ( a ) ) [ 3 ] == ( ( const uint32_t * ) ( b ) ) [ 3 ] ) )

// /usr/include/bits/socket.h 

#define AF_ASH PF_ASH

// /usr/include/stdint.h 

#define INT32_MIN (-2147483648)

// /usr/include/bits/socket.h 

#define PF_SNA (22)
#define PF_KEY (15)

// /usr/include/netinet/in.h 

#define IN_LOOPBACKNET (127)

// /usr/include/sys/uio.h 

#define _SYS_UIO_H (1)

// /usr/include/bits/socket.h 

#define AF_NFC PF_NFC

// /usr/include/sys/types.h 

#define __need_clockid_t

// /usr/include/stdint.h 

#define UINT32_C(c) c ## U

// /usr/include/bits/socket.h 

#define PF_VSOCK (40)
#define SOL_IRDA (266)

// /usr/include/stdint.h 

#define INTPTR_MIN (-9223372036854775808l)

// /usr/include/bits/socket.h 

#define PF_RXRPC (33)
#define PF_CAN (29)

// /usr/include/stdint.h 

#define INT_FAST32_MAX (9223372036854775807l)

// /usr/include/netinet/in.h 

#define IN_CLASSC_NET (4294967040u)

// /usr/include/stdint.h 

#define UINT_LEAST32_MAX (4294967295u)

// /usr/include/bits/uio.h 

#define UIO_MAXIOV (1024)

// /usr/include/netinet/in.h 

#define IN_MULTICAST(a) IN_CLASSD ( a )

// /usr/include/bits/socket.h 

#define SOL_PACKET (263)

// /usr/include/stdint.h 

#define INT16_C(c) c

// /usr/include/bits/socket.h 

#define AF_ROUTE PF_ROUTE

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_V4COMPAT(a) ( ( ( ( const uint32_t * ) ( a ) ) [ 0 ] == 0 ) && ( ( ( const uint32_t * ) ( a ) ) [ 1 ] == 0 ) && ( ( ( const uint32_t * ) ( a ) ) [ 2 ] == 0 ) && ( ntohl ( ( ( const uint32_t * ) ( a ) ) [ 3 ] ) > 1 ) )
#define IPPROTO_IDP IPPROTO_IDP
#define IN6_IS_ADDR_MC_SITELOCAL(a) ( IN6_IS_ADDR_MULTICAST ( a ) && ( ( ( ( const uint8_t * ) ( a ) ) [ 1 ] & 0xf ) == 0x5 ) )

// /usr/include/bits/socket.h 

#define PF_NFC (39)

// /usr/include/bits/types.h 

#define __UWORD_TYPE unsigned long int

// /usr/include/bits/socket.h 

#define AF_INET PF_INET
#define AF_ATMPVC PF_ATMPVC

// /usr/include/stdint.h 

#define UINT64_C(c) c ## UL

// /usr/include/sys/types.h 

#define __gid_t_defined

// /usr/include/bits/types.h 

#define __S16_TYPE short int

// /usr/include/netinet/in.h 

#define IPPROTO_PUP IPPROTO_PUP

// /usr/include/sys/types.h 

#define __dev_t_defined

// /usr/include/bits/socket.h 

#define PF_ROUTE PF_NETLINK
#define PF_RDS (21)
#define SOL_X25 (262)
#define MSG_TRUNC MSG_TRUNC

// /usr/include/netinet/in.h 

#define IPPROTO_MH IPPROTO_MH

// /usr/include/stdint.h 

#define __uint32_t_defined

// /usr/include/netinet/in.h 

#define IN_CLASSA_NSHIFT (24)
#define IN_CLASSA_NET (4278190080u)

// /usr/include/bits/socket.h 

#define PF_WANPIPE (25)

// /usr/include/sys/types.h 

#define _SYS_TYPES_H (1)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _SIZE_T_

// /usr/include/bits/types.h 

#define __UQUAD_TYPE unsigned long int

// /usr/include/netinet/in.h 

#define IPPROTO_RAW IPPROTO_RAW

// /usr/include/bits/socket.h 

#define PF_X25 (9)

// /usr/include/netinet/in.h 

#define INADDR_NONE ( ( in_addr_t ) 0xffffffff )

// /usr/include/bits/socket.h 

#define CMSG_NXTHDR(mhdr, cmsg) __cmsg_nxthdr ( mhdr , cmsg )
#define SOL_DECNET (261)

// /usr/include/bits/sockaddr.h 

#define __SOCKADDR_COMMON_SIZE ( sizeof ( unsigned short int ) )

// /usr/include/bits/socket.h 

#define PF_TIPC (30)

// /usr/include/netinet/in.h 

#define IPPROTO_IPV6 IPPROTO_IPV6

// /usr/include/bits/socket.h 

#define AF_RDS PF_RDS
#define PF_ATMSVC (20)
#define AF_NETLINK PF_NETLINK

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _SYS_SIZE_T_H

// /usr/include/bits/socket.h 

#define CMSG_SPACE(len) ( CMSG_ALIGN ( len ) + CMSG_ALIGN ( sizeof ( struct cmsghdr ) ) )

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _SIZE_T_DECLARED

// /usr/include/sys/socket.h 

#define _SYS_SOCKET_H (1)

// /usr/include/netinet/in.h 

#define IPPROTO_ICMPV6 IPPROTO_ICMPV6

// /usr/include/bits/socket.h 

#define PF_BRIDGE (7)

// /usr/include/netinet/in.h 

#define _NETINET_IN_H (1)

// /usr/include/sys/types.h 

#define __ino_t_defined

// /usr/include/bits/socket.h 

#define PF_INET6 (10)

// /usr/include/bits/types.h 

#define __U16_TYPE unsigned short int

// /usr/include/netinet/in.h 

#define IN6_IS_ADDR_MC_ORGLOCAL(a) ( IN6_IS_ADDR_MULTICAST ( a ) && ( ( ( ( const uint8_t * ) ( a ) ) [ 1 ] & 0xf ) == 0x8 ) )

// /usr/include/bits/socket.h 

#define PF_LOCAL (1)

// /usr/include/bits/types.h 

#define __U32_TYPE unsigned int

// /usr/include/bits/socket.h 

#define PF_ALG (38)

// /usr/lib64/gcc/x86_64-suse-linux/4.8/include/stddef.h 

#define _BSD_SIZE_T_DEFINED_
