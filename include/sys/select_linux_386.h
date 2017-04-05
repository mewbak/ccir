// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// source: /usr/include/i386-linux-gnu/sys/select.h

#define __FD_ZERO(set) do { unsigned int __i ; fd_set * __arr = ( set ) ; for ( __i = 0 ; __i < sizeof ( fd_set ) / sizeof ( __fd_mask ) ; ++ __i ) __FDS_BITS ( __arr ) [ __i ] = 0 ; } while ( 0 )
#define __FD_SET(d, set) ( ( void ) ( __FDS_BITS ( set ) [ __FD_ELT ( d ) ] |= __FD_MASK ( d ) ) )
#define __FD_CLR(d, set) ( ( void ) ( __FDS_BITS ( set ) [ __FD_ELT ( d ) ] &= ~ __FD_MASK ( d ) ) )
#define __FD_ISSET(d, set) ( ( __FDS_BITS ( set ) [ __FD_ELT ( d ) ] & __FD_MASK ( d ) ) != 0 )
#define _SYS_SELECT_H 1
#define __sigset_t_defined
typedef __sigset_t sigset_t;
typedef __suseconds_t suseconds_t;
#define __suseconds_t_defined
typedef long int __fd_mask;
#define __NFDBITS ( 8 * ( int ) sizeof ( __fd_mask ) )
#define __FD_ELT(d) ( ( d ) / __NFDBITS )
#define __FD_MASK(d) ( ( __fd_mask ) ( 1UL << ( ( d ) % __NFDBITS ) ) )
typedef struct {
	__fd_mask __fds_bits[32];
} fd_set;
#define __FDS_BITS(set) ( ( set ) -> __fds_bits )
#define FD_SETSIZE __FD_SETSIZE
#define FD_SET(fd, fdsetp) __FD_SET ( fd , fdsetp )
#define FD_CLR(fd, fdsetp) __FD_CLR ( fd , fdsetp )
#define FD_ISSET(fd, fdsetp) __FD_ISSET ( fd , fdsetp )
#define FD_ZERO(fdsetp) __FD_ZERO ( fdsetp )
extern int select(int __nfds, fd_set * __readfds, fd_set * __writefds, fd_set * __exceptfds, struct timeval *__timeout);
