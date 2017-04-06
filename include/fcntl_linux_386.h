// Code generated by running "go generate". DO NOT EDIT.

// +build ignore

// source: /usr/include/fcntl.h

#define _FCNTL_H 1
#define __OPEN_NEEDS_MODE(oflag) ( ( ( oflag ) & O_CREAT ) != 0 || ( ( oflag ) & __O_TMPFILE ) == __O_TMPFILE )
typedef __mode_t mode_t;
#define __mode_t_defined
typedef __off_t off_t;
#define __off_t_defined
typedef __pid_t pid_t;
#define __pid_t_defined
extern int fcntl(int __fd, int __cmd, ...);
extern int open(char *__file, int __oflag, ...);
extern int creat(char *__file, mode_t __mode);
struct flock {
	short int l_type;
	short int l_whence;
	__off_t l_start;
	__off_t l_len;
	__pid_t l_pid;
};
