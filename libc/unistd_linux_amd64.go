// Code generated by running "go generate". DO NOT EDIT.

// ----------------------------------------------------------------------------
//      /usr/include/unistd.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
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
//      /usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h
// ----------------------------------------------------------------------------
/* Copyright (C) 1989-2016 Free Software Foundation, Inc.

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

package libc

const (
	Unistd_F_LOCK                              = 1
	Unistd_F_OK                                = 0
	Unistd_F_TEST                              = 3
	Unistd_F_TLOCK                             = 2
	Unistd_F_ULOCK                             = 0
	Unistd_R_OK                                = 4
	Unistd_SEEK_CUR                            = 1
	Unistd_SEEK_END                            = 2
	Unistd_SEEK_SET                            = 0
	Unistd_STDERR_FILENO                       = 2
	Unistd_STDIN_FILENO                        = 0
	Unistd_STDOUT_FILENO                       = 1
	Unistd_W_OK                                = 2
	Unistd_X_OK                                = 1
	Unistd__BITS_TYPES_H                       = 1
	Unistd__POSIX2_C_BIND                      = 199506
	Unistd__POSIX2_C_DEV                       = 199506
	Unistd__POSIX2_C_VERSION                   = 199506
	Unistd__POSIX2_LOCALEDEF                   = 199506
	Unistd__POSIX2_SW_DEV                      = 199506
	Unistd__POSIX2_VERSION                     = 199506
	Unistd__POSIX_VERSION                      = 199506
	Unistd__UNISTD_H                           = 1
	Unistd__XOPEN_CRYPT                        = 1
	Unistd__XOPEN_ENH_I18N                     = 1
	Unistd__XOPEN_LEGACY                       = 1
	Unistd__XOPEN_UNIX                         = 1
	Unistd__XOPEN_VERSION                      = 500
	Unistd__XOPEN_XCU_VERSION                  = 4
	Unistd__XOPEN_XPG2                         = 1
	Unistd__XOPEN_XPG3                         = 1
	Unistd__XOPEN_XPG4                         = 1
	Unistd___POSIX2_THIS_VERSION               = 199506
	Unistd___S32_TYPE                          = 0
	Unistd___SLONG32_TYPE                      = 0
	Unistd__CS_GNU_LIBC_VERSION                = 2
	Unistd__CS_GNU_LIBPTHREAD_VERSION          = 3
	Unistd__CS_LFS64_CFLAGS                    = 1004
	Unistd__CS_LFS64_LDFLAGS                   = 1005
	Unistd__CS_LFS64_LIBS                      = 1006
	Unistd__CS_LFS64_LINTFLAGS                 = 1007
	Unistd__CS_LFS_CFLAGS                      = 1000
	Unistd__CS_LFS_LDFLAGS                     = 1001
	Unistd__CS_LFS_LIBS                        = 1002
	Unistd__CS_LFS_LINTFLAGS                   = 1003
	Unistd__CS_PATH                            = 0
	Unistd__CS_POSIX_V6_ILP32_OFF32_CFLAGS     = 1116
	Unistd__CS_POSIX_V6_ILP32_OFF32_LDFLAGS    = 1117
	Unistd__CS_POSIX_V6_ILP32_OFF32_LIBS       = 1118
	Unistd__CS_POSIX_V6_ILP32_OFF32_LINTFLAGS  = 1119
	Unistd__CS_POSIX_V6_ILP32_OFFBIG_CFLAGS    = 1120
	Unistd__CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS   = 1121
	Unistd__CS_POSIX_V6_ILP32_OFFBIG_LIBS      = 1122
	Unistd__CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS = 1123
	Unistd__CS_POSIX_V6_LP64_OFF64_CFLAGS      = 1124
	Unistd__CS_POSIX_V6_LP64_OFF64_LDFLAGS     = 1125
	Unistd__CS_POSIX_V6_LP64_OFF64_LIBS        = 1126
	Unistd__CS_POSIX_V6_LP64_OFF64_LINTFLAGS   = 1127
	Unistd__CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS    = 1128
	Unistd__CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS   = 1129
	Unistd__CS_POSIX_V6_LPBIG_OFFBIG_LIBS      = 1130
	Unistd__CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS = 1131
	Unistd__CS_POSIX_V7_ILP32_OFF32_CFLAGS     = 1132
	Unistd__CS_POSIX_V7_ILP32_OFF32_LDFLAGS    = 1133
	Unistd__CS_POSIX_V7_ILP32_OFF32_LIBS       = 1134
	Unistd__CS_POSIX_V7_ILP32_OFF32_LINTFLAGS  = 1135
	Unistd__CS_POSIX_V7_ILP32_OFFBIG_CFLAGS    = 1136
	Unistd__CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS   = 1137
	Unistd__CS_POSIX_V7_ILP32_OFFBIG_LIBS      = 1138
	Unistd__CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS = 1139
	Unistd__CS_POSIX_V7_LP64_OFF64_CFLAGS      = 1140
	Unistd__CS_POSIX_V7_LP64_OFF64_LDFLAGS     = 1141
	Unistd__CS_POSIX_V7_LP64_OFF64_LIBS        = 1142
	Unistd__CS_POSIX_V7_LP64_OFF64_LINTFLAGS   = 1143
	Unistd__CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS    = 1144
	Unistd__CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS   = 1145
	Unistd__CS_POSIX_V7_LPBIG_OFFBIG_LIBS      = 1146
	Unistd__CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS = 1147
	Unistd__CS_V5_WIDTH_RESTRICTED_ENVS        = 4
	Unistd__CS_V6_ENV                          = 1148
	Unistd__CS_V6_WIDTH_RESTRICTED_ENVS        = 1
	Unistd__CS_V7_ENV                          = 1149
	Unistd__CS_V7_WIDTH_RESTRICTED_ENVS        = 5
	Unistd__CS_XBS5_ILP32_OFF32_CFLAGS         = 1100
	Unistd__CS_XBS5_ILP32_OFF32_LDFLAGS        = 1101
	Unistd__CS_XBS5_ILP32_OFF32_LIBS           = 1102
	Unistd__CS_XBS5_ILP32_OFF32_LINTFLAGS      = 1103
	Unistd__CS_XBS5_ILP32_OFFBIG_CFLAGS        = 1104
	Unistd__CS_XBS5_ILP32_OFFBIG_LDFLAGS       = 1105
	Unistd__CS_XBS5_ILP32_OFFBIG_LIBS          = 1106
	Unistd__CS_XBS5_ILP32_OFFBIG_LINTFLAGS     = 1107
	Unistd__CS_XBS5_LP64_OFF64_CFLAGS          = 1108
	Unistd__CS_XBS5_LP64_OFF64_LDFLAGS         = 1109
	Unistd__CS_XBS5_LP64_OFF64_LIBS            = 1110
	Unistd__CS_XBS5_LP64_OFF64_LINTFLAGS       = 1111
	Unistd__CS_XBS5_LPBIG_OFFBIG_CFLAGS        = 1112
	Unistd__CS_XBS5_LPBIG_OFFBIG_LDFLAGS       = 1113
	Unistd__CS_XBS5_LPBIG_OFFBIG_LIBS          = 1114
	Unistd__CS_XBS5_LPBIG_OFFBIG_LINTFLAGS     = 1115
	Unistd__PC_2_SYMLINKS                      = 20
	Unistd__PC_ALLOC_SIZE_MIN                  = 18
	Unistd__PC_ASYNC_IO                        = 10
	Unistd__PC_CHOWN_RESTRICTED                = 6
	Unistd__PC_FILESIZEBITS                    = 13
	Unistd__PC_LINK_MAX                        = 0
	Unistd__PC_MAX_CANON                       = 1
	Unistd__PC_MAX_INPUT                       = 2
	Unistd__PC_NAME_MAX                        = 3
	Unistd__PC_NO_TRUNC                        = 7
	Unistd__PC_PATH_MAX                        = 4
	Unistd__PC_PIPE_BUF                        = 5
	Unistd__PC_PRIO_IO                         = 11
	Unistd__PC_REC_INCR_XFER_SIZE              = 14
	Unistd__PC_REC_MAX_XFER_SIZE               = 15
	Unistd__PC_REC_MIN_XFER_SIZE               = 16
	Unistd__PC_REC_XFER_ALIGN                  = 17
	Unistd__PC_SOCK_MAXBUF                     = 12
	Unistd__PC_SYMLINK_MAX                     = 19
	Unistd__PC_SYNC_IO                         = 9
	Unistd__PC_VDISABLE                        = 8
	Unistd__SC_2_CHAR_TERM                     = 95
	Unistd__SC_2_C_BIND                        = 47
	Unistd__SC_2_C_DEV                         = 48
	Unistd__SC_2_C_VERSION                     = 96
	Unistd__SC_2_FORT_DEV                      = 49
	Unistd__SC_2_FORT_RUN                      = 50
	Unistd__SC_2_LOCALEDEF                     = 52
	Unistd__SC_2_PBS                           = 168
	Unistd__SC_2_PBS_ACCOUNTING                = 169
	Unistd__SC_2_PBS_CHECKPOINT                = 175
	Unistd__SC_2_PBS_LOCATE                    = 170
	Unistd__SC_2_PBS_MESSAGE                   = 171
	Unistd__SC_2_PBS_TRACK                     = 172
	Unistd__SC_2_SW_DEV                        = 51
	Unistd__SC_2_UPE                           = 97
	Unistd__SC_2_VERSION                       = 46
	Unistd__SC_ADVISORY_INFO                   = 132
	Unistd__SC_AIO_LISTIO_MAX                  = 23
	Unistd__SC_AIO_MAX                         = 24
	Unistd__SC_AIO_PRIO_DELTA_MAX              = 25
	Unistd__SC_ARG_MAX                         = 0
	Unistd__SC_ASYNCHRONOUS_IO                 = 12
	Unistd__SC_ATEXIT_MAX                      = 87
	Unistd__SC_AVPHYS_PAGES                    = 86
	Unistd__SC_BARRIERS                        = 133
	Unistd__SC_BASE                            = 134
	Unistd__SC_BC_BASE_MAX                     = 36
	Unistd__SC_BC_DIM_MAX                      = 37
	Unistd__SC_BC_SCALE_MAX                    = 38
	Unistd__SC_BC_STRING_MAX                   = 39
	Unistd__SC_CHARCLASS_NAME_MAX              = 45
	Unistd__SC_CHAR_BIT                        = 101
	Unistd__SC_CHAR_MAX                        = 102
	Unistd__SC_CHAR_MIN                        = 103
	Unistd__SC_CHILD_MAX                       = 1
	Unistd__SC_CLK_TCK                         = 2
	Unistd__SC_CLOCK_SELECTION                 = 137
	Unistd__SC_COLL_WEIGHTS_MAX                = 40
	Unistd__SC_CPUTIME                         = 138
	Unistd__SC_C_LANG_SUPPORT                  = 135
	Unistd__SC_C_LANG_SUPPORT_R                = 136
	Unistd__SC_DELAYTIMER_MAX                  = 26
	Unistd__SC_DEVICE_IO                       = 140
	Unistd__SC_DEVICE_SPECIFIC                 = 141
	Unistd__SC_DEVICE_SPECIFIC_R               = 142
	Unistd__SC_EQUIV_CLASS_MAX                 = 41
	Unistd__SC_EXPR_NEST_MAX                   = 42
	Unistd__SC_FD_MGMT                         = 143
	Unistd__SC_FIFO                            = 144
	Unistd__SC_FILE_ATTRIBUTES                 = 146
	Unistd__SC_FILE_LOCKING                    = 147
	Unistd__SC_FILE_SYSTEM                     = 148
	Unistd__SC_FSYNC                           = 15
	Unistd__SC_GETGR_R_SIZE_MAX                = 69
	Unistd__SC_GETPW_R_SIZE_MAX                = 70
	Unistd__SC_HOST_NAME_MAX                   = 180
	Unistd__SC_INT_MAX                         = 104
	Unistd__SC_INT_MIN                         = 105
	Unistd__SC_IOV_MAX                         = 60
	Unistd__SC_IPV6                            = 235
	Unistd__SC_JOB_CONTROL                     = 7
	Unistd__SC_LEVEL1_DCACHE_ASSOC             = 189
	Unistd__SC_LEVEL1_DCACHE_LINESIZE          = 190
	Unistd__SC_LEVEL1_DCACHE_SIZE              = 188
	Unistd__SC_LEVEL1_ICACHE_ASSOC             = 186
	Unistd__SC_LEVEL1_ICACHE_LINESIZE          = 187
	Unistd__SC_LEVEL1_ICACHE_SIZE              = 185
	Unistd__SC_LEVEL2_CACHE_ASSOC              = 192
	Unistd__SC_LEVEL2_CACHE_LINESIZE           = 193
	Unistd__SC_LEVEL2_CACHE_SIZE               = 191
	Unistd__SC_LEVEL3_CACHE_ASSOC              = 195
	Unistd__SC_LEVEL3_CACHE_LINESIZE           = 196
	Unistd__SC_LEVEL3_CACHE_SIZE               = 194
	Unistd__SC_LEVEL4_CACHE_ASSOC              = 198
	Unistd__SC_LEVEL4_CACHE_LINESIZE           = 199
	Unistd__SC_LEVEL4_CACHE_SIZE               = 197
	Unistd__SC_LINE_MAX                        = 43
	Unistd__SC_LOGIN_NAME_MAX                  = 71
	Unistd__SC_LONG_BIT                        = 106
	Unistd__SC_MAPPED_FILES                    = 16
	Unistd__SC_MB_LEN_MAX                      = 108
	Unistd__SC_MEMLOCK                         = 17
	Unistd__SC_MEMLOCK_RANGE                   = 18
	Unistd__SC_MEMORY_PROTECTION               = 19
	Unistd__SC_MESSAGE_PASSING                 = 20
	Unistd__SC_MONOTONIC_CLOCK                 = 149
	Unistd__SC_MQ_OPEN_MAX                     = 27
	Unistd__SC_MQ_PRIO_MAX                     = 28
	Unistd__SC_MULTI_PROCESS                   = 150
	Unistd__SC_NETWORKING                      = 152
	Unistd__SC_NGROUPS_MAX                     = 3
	Unistd__SC_NL_ARGMAX                       = 119
	Unistd__SC_NL_LANGMAX                      = 120
	Unistd__SC_NL_MSGMAX                       = 121
	Unistd__SC_NL_NMAX                         = 122
	Unistd__SC_NL_SETMAX                       = 123
	Unistd__SC_NL_TEXTMAX                      = 124
	Unistd__SC_NPROCESSORS_CONF                = 83
	Unistd__SC_NPROCESSORS_ONLN                = 84
	Unistd__SC_NZERO                           = 109
	Unistd__SC_OPEN_MAX                        = 4
	Unistd__SC_PAGESIZE                        = 30
	Unistd__SC_PASS_MAX                        = 88
	Unistd__SC_PHYS_PAGES                      = 85
	Unistd__SC_PII                             = 53
	Unistd__SC_PII_INTERNET                    = 56
	Unistd__SC_PII_INTERNET_DGRAM              = 62
	Unistd__SC_PII_INTERNET_STREAM             = 61
	Unistd__SC_PII_OSI                         = 57
	Unistd__SC_PII_OSI_CLTS                    = 64
	Unistd__SC_PII_OSI_COTS                    = 63
	Unistd__SC_PII_OSI_M                       = 65
	Unistd__SC_PII_SOCKET                      = 55
	Unistd__SC_PII_XTI                         = 54
	Unistd__SC_PIPE                            = 145
	Unistd__SC_POLL                            = 58
	Unistd__SC_PRIORITIZED_IO                  = 13
	Unistd__SC_PRIORITY_SCHEDULING             = 10
	Unistd__SC_RAW_SOCKETS                     = 236
	Unistd__SC_READER_WRITER_LOCKS             = 153
	Unistd__SC_REALTIME_SIGNALS                = 9
	Unistd__SC_REGEXP                          = 155
	Unistd__SC_REGEX_VERSION                   = 156
	Unistd__SC_RE_DUP_MAX                      = 44
	Unistd__SC_RTSIG_MAX                       = 31
	Unistd__SC_SAVED_IDS                       = 8
	Unistd__SC_SCHAR_MAX                       = 111
	Unistd__SC_SCHAR_MIN                       = 112
	Unistd__SC_SELECT                          = 59
	Unistd__SC_SEMAPHORES                      = 21
	Unistd__SC_SEM_NSEMS_MAX                   = 32
	Unistd__SC_SEM_VALUE_MAX                   = 33
	Unistd__SC_SHARED_MEMORY_OBJECTS           = 22
	Unistd__SC_SHELL                           = 157
	Unistd__SC_SHRT_MAX                        = 113
	Unistd__SC_SHRT_MIN                        = 114
	Unistd__SC_SIGNALS                         = 158
	Unistd__SC_SIGQUEUE_MAX                    = 34
	Unistd__SC_SINGLE_PROCESS                  = 151
	Unistd__SC_SPAWN                           = 159
	Unistd__SC_SPIN_LOCKS                      = 154
	Unistd__SC_SPORADIC_SERVER                 = 160
	Unistd__SC_SSIZE_MAX                       = 110
	Unistd__SC_SS_REPL_MAX                     = 241
	Unistd__SC_STREAMS                         = 174
	Unistd__SC_STREAM_MAX                      = 5
	Unistd__SC_SYMLOOP_MAX                     = 173
	Unistd__SC_SYNCHRONIZED_IO                 = 14
	Unistd__SC_SYSTEM_DATABASE                 = 162
	Unistd__SC_SYSTEM_DATABASE_R               = 163
	Unistd__SC_THREADS                         = 67
	Unistd__SC_THREAD_ATTR_STACKADDR           = 77
	Unistd__SC_THREAD_ATTR_STACKSIZE           = 78
	Unistd__SC_THREAD_CPUTIME                  = 139
	Unistd__SC_THREAD_DESTRUCTOR_ITERATIONS    = 73
	Unistd__SC_THREAD_KEYS_MAX                 = 74
	Unistd__SC_THREAD_PRIORITY_SCHEDULING      = 79
	Unistd__SC_THREAD_PRIO_INHERIT             = 80
	Unistd__SC_THREAD_PRIO_PROTECT             = 81
	Unistd__SC_THREAD_PROCESS_SHARED           = 82
	Unistd__SC_THREAD_ROBUST_PRIO_INHERIT      = 247
	Unistd__SC_THREAD_ROBUST_PRIO_PROTECT      = 248
	Unistd__SC_THREAD_SAFE_FUNCTIONS           = 68
	Unistd__SC_THREAD_SPORADIC_SERVER          = 161
	Unistd__SC_THREAD_STACK_MIN                = 75
	Unistd__SC_THREAD_THREADS_MAX              = 76
	Unistd__SC_TIMEOUTS                        = 164
	Unistd__SC_TIMERS                          = 11
	Unistd__SC_TIMER_MAX                       = 35
	Unistd__SC_TRACE                           = 181
	Unistd__SC_TRACE_EVENT_FILTER              = 182
	Unistd__SC_TRACE_EVENT_NAME_MAX            = 242
	Unistd__SC_TRACE_INHERIT                   = 183
	Unistd__SC_TRACE_LOG                       = 184
	Unistd__SC_TRACE_NAME_MAX                  = 243
	Unistd__SC_TRACE_SYS_MAX                   = 244
	Unistd__SC_TRACE_USER_EVENT_MAX            = 245
	Unistd__SC_TTY_NAME_MAX                    = 72
	Unistd__SC_TYPED_MEMORY_OBJECTS            = 165
	Unistd__SC_TZNAME_MAX                      = 6
	Unistd__SC_T_IOV_MAX                       = 66
	Unistd__SC_UCHAR_MAX                       = 115
	Unistd__SC_UINT_MAX                        = 116
	Unistd__SC_UIO_MAXIOV                      = 60
	Unistd__SC_ULONG_MAX                       = 117
	Unistd__SC_USER_GROUPS                     = 166
	Unistd__SC_USER_GROUPS_R                   = 167
	Unistd__SC_USHRT_MAX                       = 118
	Unistd__SC_V6_ILP32_OFF32                  = 176
	Unistd__SC_V6_ILP32_OFFBIG                 = 177
	Unistd__SC_V6_LP64_OFF64                   = 178
	Unistd__SC_V6_LPBIG_OFFBIG                 = 179
	Unistd__SC_V7_ILP32_OFF32                  = 237
	Unistd__SC_V7_ILP32_OFFBIG                 = 238
	Unistd__SC_V7_LP64_OFF64                   = 239
	Unistd__SC_V7_LPBIG_OFFBIG                 = 240
	Unistd__SC_VERSION                         = 29
	Unistd__SC_WORD_BIT                        = 107
	Unistd__SC_XBS5_ILP32_OFF32                = 125
	Unistd__SC_XBS5_ILP32_OFFBIG               = 126
	Unistd__SC_XBS5_LP64_OFF64                 = 127
	Unistd__SC_XBS5_LPBIG_OFFBIG               = 128
	Unistd__SC_XOPEN_CRYPT                     = 92
	Unistd__SC_XOPEN_ENH_I18N                  = 93
	Unistd__SC_XOPEN_LEGACY                    = 129
	Unistd__SC_XOPEN_REALTIME                  = 130
	Unistd__SC_XOPEN_REALTIME_THREADS          = 131
	Unistd__SC_XOPEN_SHM                       = 94
	Unistd__SC_XOPEN_STREAMS                   = 246
	Unistd__SC_XOPEN_UNIX                      = 91
	Unistd__SC_XOPEN_VERSION                   = 89
	Unistd__SC_XOPEN_XCU_VERSION               = 90
	Unistd__SC_XOPEN_XPG2                      = 98
	Unistd__SC_XOPEN_XPG3                      = 99
	Unistd__SC_XOPEN_XPG4                      = 100
)
