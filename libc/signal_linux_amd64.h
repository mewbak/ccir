// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// ----------------------------------------------------------------------------
//      /usr/include/signal.h
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

typedef int __sig_atomic_t;
typedef struct {
	unsigned long int __val[16l];
} __sigset_t;
extern int __sigismember(const __sigset_t *, int);
extern int __sigaddset(__sigset_t *, int);
extern int __sigdelset(__sigset_t *, int);
// /usr/include/signal.h

typedef __sig_atomic_t sig_atomic_t;
typedef __sigset_t sigset_t;
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
// /usr/include/signal.h

typedef __pid_t pid_t;
typedef __uid_t uid_t;
// /usr/include/bits/siginfo.h

typedef union sigval {
	int sival_int;
	void *sival_ptr;
} sigval_t;
typedef __clock_t __sigchld_clock_t;
typedef struct {
	int si_signo;
	int si_errno;
	int si_code;
	union {
		int _pad[28l];
		struct {
			__pid_t si_pid;
			__uid_t si_uid;
		} _kill;
		struct {
			int si_tid;
			int si_overrun;
			sigval_t si_sigval;
		} _timer;
		struct {
			__pid_t si_pid;
			__uid_t si_uid;
			sigval_t si_sigval;
		} _rt;
		struct {
			__pid_t si_pid;
			__uid_t si_uid;
			int si_status;
			__sigchld_clock_t si_utime;
			__sigchld_clock_t si_stime;
		} _sigchld;
		struct {
			void *si_addr;
			short int si_addr_lsb;
			struct {
				void *_lower;
				void *_upper;
			} si_addr_bnd;
		} _sigfault;
		struct {
			long int si_band;
			int si_fd;
		} _sigpoll;
		struct {
			void *_call_addr;
			int _syscall;
			unsigned int _arch;
		} _sigsys;
	} _sifields;
} siginfo_t;
enum { SI_ASYNCNL = -60, SI_TKILL = -6, SI_SIGIO, SI_ASYNCIO, SI_MESGQ, SI_TIMER, SI_QUEUE, SI_USER, SI_KERNEL = 128 };
enum { ILL_ILLOPC = 1, ILL_ILLOPN, ILL_ILLADR, ILL_ILLTRP, ILL_PRVOPC, ILL_PRVREG, ILL_COPROC, ILL_BADSTK };
enum { FPE_INTDIV = 1, FPE_INTOVF, FPE_FLTDIV, FPE_FLTOVF, FPE_FLTUND, FPE_FLTRES, FPE_FLTINV, FPE_FLTSUB };
enum { SEGV_MAPERR = 1, SEGV_ACCERR };
enum { BUS_ADRALN = 1, BUS_ADRERR, BUS_OBJERR, BUS_MCEERR_AR, BUS_MCEERR_AO };
enum { TRAP_BRKPT = 1, TRAP_TRACE };
enum { CLD_EXITED = 1, CLD_KILLED, CLD_DUMPED, CLD_TRAPPED, CLD_STOPPED, CLD_CONTINUED };
enum { POLL_IN = 1, POLL_OUT, POLL_MSG, POLL_ERR, POLL_PRI, POLL_HUP };
typedef union pthread_attr_t pthread_attr_t;
typedef struct sigevent {
	sigval_t sigev_value;
	int sigev_signo;
	int sigev_notify;
	union {
		int _pad[12l];
		__pid_t _tid;
		struct {
			void (*_function) (sigval_t);
			pthread_attr_t *_attribute;
		} _sigev_thread;
	} _sigev_un;
} sigevent_t;
enum { SIGEV_SIGNAL = 0, SIGEV_NONE, SIGEV_THREAD, SIGEV_THREAD_ID = 4 };
// /usr/include/signal.h

typedef void (*__sighandler_t) (int);
extern __sighandler_t __sysv_signal(int __sig, __sighandler_t __handler);
extern __sighandler_t bsd_signal(int __sig, __sighandler_t __handler);
extern int kill(__pid_t __pid, int __sig);
extern int killpg(__pid_t __pgrp, int __sig);
extern int raise(int __sig);
extern int __sigpause(int __sig_or_mask, int __is_sig);
extern int sigemptyset(sigset_t * __set);
extern int sigfillset(sigset_t * __set);
extern int sigaddset(sigset_t * __set, int __signo);
extern int sigdelset(sigset_t * __set, int __signo);
extern int sigismember(const sigset_t * __set, int __signo);
extern int sigprocmask(int __how, const sigset_t * __set, sigset_t * __oset);
extern int sigsuspend(const sigset_t * __set);
extern int sigaction(int __sig, const struct sigaction *__act, struct sigaction *__oact);
extern int sigpending(sigset_t * __set);
extern int sigwait(const sigset_t * __set, int *__sig);
extern int sigwaitinfo(const sigset_t * __set, siginfo_t * __info);
extern int sigtimedwait(const sigset_t * __set, siginfo_t * __info, const struct timespec *__timeout);
extern int sigqueue(__pid_t __pid, int __sig, const union sigval __val);
extern int siginterrupt(int __sig, int __interrupt);
extern int sigstack(struct sigstack *__ss, struct sigstack *__oss);
extern int sigaltstack(const struct sigaltstack *__ss, struct sigaltstack *__oss);
extern int sighold(int __sig);
extern int sigrelse(int __sig);
extern int sigignore(int __sig);
extern __sighandler_t sigset(int __sig, __sighandler_t __disp);
extern int __libc_current_sigrtmin(void);
extern int __libc_current_sigrtmax(void);

// /usr/include/bits/siginfo.h 

#define si_stime _sifields . _sigchld . si_stime

// /usr/include/bits/signum.h 

#define SIGIO (29)
#define SIGALRM (14)

// /usr/include/bits/siginfo.h 

#define si_syscall _sifields . _sigsys . _syscall

// /usr/include/bits/signum.h 

#define SIGSEGV (11)

// /usr/include/bits/types.h 

#define _BITS_TYPES_H (1)

// /usr/include/bits/siginfo.h 

#define SIGEV_THREAD SIGEV_THREAD
#define __have_sigval_t (1)
#define si_value _sifields . _rt . si_sigval
#define SI_TKILL SI_TKILL
#define si_status _sifields . _sigchld . si_status

// /usr/include/bits/types.h 

#define __UQUAD_TYPE unsigned long int

// /usr/include/bits/signum.h 

#define SIGUNUSED (31)

// /usr/include/bits/siginfo.h 

#define SI_TIMER SI_TIMER

// /usr/include/bits/sigset.h 

#define _SIGSET_H_types (1)

// /usr/include/bits/signum.h 

#define SIGCLD SIGCHLD

// /usr/include/bits/siginfo.h 

#define FPE_FLTSUB FPE_FLTSUB
#define SIGEV_NONE SIGEV_NONE

// /usr/include/bits/signum.h 

#define SIG_ERR (-1)

// /usr/include/bits/siginfo.h 

#define __have_pthread_attr_t (1)
#define POLL_HUP POLL_HUP
#define CLD_CONTINUED CLD_CONTINUED

// /usr/include/bits/types.h 

#define __S32_TYPE int

// /usr/include/bits/siginfo.h 

#define CLD_EXITED CLD_EXITED

// /usr/include/signal.h 

#define __sig_atomic_t_defined

// /usr/include/bits/siginfo.h 

#define si_uid _sifields . _kill . si_uid

// /usr/include/bits/signum.h 

#define SIGSYS (31)

// /usr/include/bits/siginfo.h 

#define SI_QUEUE SI_QUEUE
#define ILL_BADSTK ILL_BADSTK

// /usr/include/bits/signum.h 

#define SIGRTMAX ( __libc_current_sigrtmax ( ) )

// /usr/include/bits/siginfo.h 

#define si_lower _sifields . _sigfault . si_addr_bnd . _lower
#define si_overrun _sifields . _timer . si_overrun
#define POLL_PRI POLL_PRI

// /usr/include/bits/types.h 

#define __ULONG32_TYPE unsigned int

// /usr/include/bits/signum.h 

#define SIGCONT (18)
#define SIGQUIT (3)

// /usr/include/bits/siginfo.h 

#define SI_SIGIO SI_SIGIO
#define SI_KERNEL SI_KERNEL
#define __SI_ALIGNMENT

// /usr/include/bits/sigset.h 

#define __sigword(sig) ( ( ( sig ) - 1 ) / ( 8 * sizeof ( unsigned long int ) ) )

// /usr/include/bits/signum.h 

#define SIGHUP (1)

// /usr/include/signal.h 

#define __sigset_t_defined

// /usr/include/bits/siginfo.h 

#define si_fd _sifields . _sigpoll . si_fd

// /usr/include/bits/types.h 

#define __S16_TYPE short int

// /usr/include/bits/siginfo.h 

#define si_pid _sifields . _kill . si_pid

// /usr/include/bits/types.h 

#define __U64_TYPE unsigned long int

// /usr/include/bits/siginfo.h 

#define __SI_PAD_SIZE ( ( __SI_MAX_SIZE / sizeof ( int ) ) - 4 )
#define ILL_ILLOPC ILL_ILLOPC

// /usr/include/bits/signum.h 

#define SIGVTALRM (26)

// /usr/include/bits/types.h 

#define __UWORD_TYPE unsigned long int

// /usr/include/signal.h 

#define signal __sysv_signal

// /usr/include/bits/siginfo.h 

#define CLD_STOPPED CLD_STOPPED
#define SEGV_MAPERR SEGV_MAPERR

// /usr/include/bits/signum.h 

#define SIG_IGN ( ( __sighandler_t ) 1 )

// /usr/include/bits/siginfo.h 

#define ILL_PRVOPC ILL_PRVOPC

// /usr/include/bits/signum.h 

#define __SIGRTMAX (64)

// /usr/include/bits/siginfo.h 

#define SEGV_ACCERR SEGV_ACCERR
#define si_utime _sifields . _sigchld . si_utime
#define si_ptr _sifields . _rt . si_sigval . sival_ptr

// /usr/include/bits/signum.h 

#define SIGBUS (7)

// /usr/include/bits/siginfo.h 

#define si_upper _sifields . _sigfault . si_addr_bnd . _upper
#define ILL_ILLOPN ILL_ILLOPN

// /usr/include/bits/signum.h 

#define SIGUSR1 (10)

// /usr/include/signal.h 

#define sigpause(sig) __sigpause ( ( sig ) , 1 )

// /usr/include/bits/signum.h 

#define SIGFPE (8)
#define SIG_DFL ( ( __sighandler_t ) 0 )
#define SIGSTKFLT (16)
#define SIGPROF (27)

// /usr/include/signal.h 

#define __uid_t_defined

// /usr/include/bits/siginfo.h 

#define __have_siginfo_t (1)

// /usr/include/bits/signum.h 

#define SIGRTMIN ( __libc_current_sigrtmin ( ) )

// /usr/include/bits/siginfo.h 

#define FPE_FLTDIV FPE_FLTDIV

// /usr/include/bits/signum.h 

#define SIGSTOP (19)

// /usr/include/bits/siginfo.h 

#define SIGEV_SIGNAL SIGEV_SIGNAL
#define ILL_ILLADR ILL_ILLADR
#define POLL_MSG POLL_MSG

// /usr/include/signal.h 

#define _SIGNAL_H

// /usr/include/bits/signum.h 

#define _NSIG (65)

// /usr/include/bits/siginfo.h 

#define si_int _sifields . _rt . si_sigval . sival_int
#define TRAP_TRACE TRAP_TRACE

// /usr/include/bits/signum.h 

#define SIGPIPE (13)

// /usr/include/bits/siginfo.h 

#define si_call_addr _sifields . _sigsys . _call_addr
#define FPE_FLTOVF FPE_FLTOVF

// /usr/include/bits/signum.h 

#define SIGTTOU (22)
#define SIGIOT (6)

// /usr/include/bits/siginfo.h 

#define si_addr _sifields . _sigfault . si_addr
#define si_timerid _sifields . _timer . si_tid
#define __SIGEV_PAD_SIZE ( ( __SIGEV_MAX_SIZE / sizeof ( int ) ) - 4 )
#define POLL_OUT POLL_OUT
#define SI_ASYNCIO SI_ASYNCIO
#define BUS_MCEERR_AO BUS_MCEERR_AO
#define ILL_COPROC ILL_COPROC
#define BUS_MCEERR_AR BUS_MCEERR_AR
#define FPE_INTDIV FPE_INTDIV
#define si_band _sifields . _sigpoll . si_band
#define __SI_MAX_SIZE (128)
#define CLD_KILLED CLD_KILLED
#define sigev_notify_attributes _sigev_un . _sigev_thread . _attribute
#define SI_ASYNCNL SI_ASYNCNL

// /usr/include/bits/signum.h 

#define SIGABRT (6)

// /usr/include/bits/sigset.h 

#define _EXTERN_INLINE __extern_inline

// /usr/include/bits/types.h 

#define __ULONGWORD_TYPE unsigned long int

// /usr/include/bits/siginfo.h 

#define FPE_INTOVF FPE_INTOVF

// /usr/include/bits/sigset.h 

#define _SIGSET_NWORDS ( 1024 / ( 8 * sizeof ( unsigned long int ) ) )

// /usr/include/bits/types.h 

#define __SQUAD_TYPE long int

// /usr/include/bits/signum.h 

#define SIGUSR2 (12)
#define SIGPWR (30)
#define SIGINT (2)
#define SIGTERM (15)

// /usr/include/bits/siginfo.h 

#define ILL_ILLTRP ILL_ILLTRP

// /usr/include/signal.h 

#define __pid_t_defined

// /usr/include/bits/siginfo.h 

#define __have_sigevent_t (1)

// /usr/include/bits/signum.h 

#define __SIGRTMIN (32)

// /usr/include/bits/siginfo.h 

#define BUS_OBJERR BUS_OBJERR
#define BUS_ADRERR BUS_ADRERR
#define si_arch _sifields . _sigsys . _arch

// /usr/include/bits/types.h 

#define __SWORD_TYPE long int

// /usr/include/bits/siginfo.h 

#define __SIGEV_MAX_SIZE (64)

// /usr/include/bits/signum.h 

#define SIGKILL (9)
#define SIGWINCH (28)
#define SIGILL (4)

// /usr/include/bits/siginfo.h 

#define si_addr_lsb _sifields . _sigfault . si_addr_lsb

// /usr/include/bits/signum.h 

#define SIGTRAP (5)

// /usr/include/bits/siginfo.h 

#define CLD_TRAPPED CLD_TRAPPED
#define FPE_FLTINV FPE_FLTINV

// /usr/include/bits/signum.h 

#define SIGTSTP (20)

// /usr/include/bits/siginfo.h 

#define SI_MESGQ SI_MESGQ

// /usr/include/bits/types.h 

#define __SLONGWORD_TYPE long int
#define __U32_TYPE unsigned int

// /usr/include/bits/siginfo.h 

#define CLD_DUMPED CLD_DUMPED
#define sigev_notify_function _sigev_un . _sigev_thread . _function
#define FPE_FLTRES FPE_FLTRES
#define SI_USER SI_USER

// /usr/include/bits/signum.h 

#define SIGXFSZ (25)
#define SIGCHLD (17)
#define SIGPOLL SIGIO
#define SIGXCPU (24)

// /usr/include/bits/sigset.h 

#define __sigmask(sig) ( ( ( unsigned long int ) 1 ) << ( ( ( sig ) - 1 ) % ( 8 * sizeof ( unsigned long int ) ) ) )

// /usr/include/bits/siginfo.h 

#define POLL_ERR POLL_ERR
#define ILL_PRVREG ILL_PRVREG

// /usr/include/bits/types.h 

#define __S64_TYPE long int

// /usr/include/bits/siginfo.h 

#define TRAP_BRKPT TRAP_BRKPT

// /usr/include/bits/types.h 

#define __SLONG32_TYPE int
#define __U16_TYPE unsigned short int

// /usr/include/bits/signum.h 

#define SIGTTIN (21)

// /usr/include/bits/siginfo.h 

#define BUS_ADRALN BUS_ADRALN

// /usr/include/bits/signum.h 

#define SIG_HOLD ( ( __sighandler_t ) 2 )

// /usr/include/bits/siginfo.h 

#define POLL_IN POLL_IN
#define FPE_FLTUND FPE_FLTUND

// /usr/include/bits/sigset.h 

#define _SIGSET_H_fns (1)

// /usr/include/bits/siginfo.h 

#define SIGEV_THREAD_ID SIGEV_THREAD_ID

// /usr/include/bits/signum.h 

#define SIGURG (23)
