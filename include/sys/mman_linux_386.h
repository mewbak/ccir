// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// source: /usr/include/i386-linux-gnu/sys/mman.h

#define _SYS_MMAN_H 1
typedef __off_t off_t;
#define __off_t_defined
typedef __mode_t mode_t;
#define __mode_t_defined
#define MAP_FAILED ( ( void * ) - 1 )
extern void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);
extern int munmap(void *__addr, size_t __len);
extern int mprotect(void *__addr, size_t __len, int __prot);
extern int msync(void *__addr, size_t __len, int __flags);
extern int mlock(void *__addr, size_t __len);
extern int munlock(void *__addr, size_t __len);
extern int mlockall(int __flags);
extern int munlockall(void);
extern int shm_open(char *__name, int __oflag, mode_t __mode);
extern int shm_unlink(char *__name);
