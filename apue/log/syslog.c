#include <apue.h>
#include <errno.h>
#include <stdarg.h>
#include <syslog.h>

static void log_doit(int, int, const char *, va_list ap);

void log_open(const char *ident, int option, int facility)
{

}

void log_ret(const char *fmt, ...)
{
    va_list ap;
}

void log_sys(const char *fmt, ...)
{

}

void log_msg(const char *fmt, ...)
{

}

void log_quit(const char *fmt, ...)
{
    
}

static void
log_doit(int errnoflag, int priority, const char *fmt, va_list ap)
{
    int errno_save;
    char buf[MAXLINE];

    errno_save = errno;
    vsnprintf(buf, MAXLINE, fmt, ap);
    if (errnoflag)
        snprintf(buf + strlen(buf), MAXLINE - strlen(buf), ": %s",
                 strerror(errno_save));

    strcat(buf, "\n");
#ifdef STD_ERROR
    fflush(stdout);
    fputs(buf, stderr);
    fflush(stderr);
#else
    syslog(priority,fmt,buf);
#endif
}

