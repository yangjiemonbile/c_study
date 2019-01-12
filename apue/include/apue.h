#ifndef _APUE_H
#define _APUE_H

#define _XOPEN_SOURE 600

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/termios.h>

#ifndef TIOCGWINSZ
#include <sys/ioctl.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>

#define MAXLINE 4096
#define PILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
#define DIR_MODE (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)
typedef void Sigfunc(int);

#if defined(SIG_IGN) && !defined(SIG_ERR)
#define SIG_ERR ((Sigfunc *)-1)
#endif

#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))

char *path_alloc(int *);
long open_max(void);
void clr_fl(int,int);
void set_fl(int,int);
void pr_exit(int,int);
void pr_mask(const char*);
Sigfunc *signal_intr(int,Sigfunc*);

int tty_cbreak(int);
int tty_raw(int);
int tty_reset(int);
void tty_atexit(void);
#ifdef ECHO
struct  termios *tty_termios(void);
#endif

int sleep_us(unsigned int);
ssize_t readn(int,void*,size_t);
ssize_t writen(int,const void*,size_t);
void daemonize(const char*);

int s_pipe(int *);


void err_dump(const char*,...);
void err_msg(const char*,...);
void err_quit(const char*,...);
void err_exit(int,const char*,...);
void err_ret(const char*,...);
void err_sys(const char*,...);

void log_msg(const char*,...);
void log_open(const char*,int,int);
void log_quit(const char*,...);
void log_ret(const char*,...);
void log_sys(const char*,...);

void TELL_WAIT(void);
void TELL_PARENT(pid_t);
void TELL_CHILD(pid_t);
void WAIT_PARENT(void);
void WAIT_CHILD(void);

#endif /* _APUE_H */
