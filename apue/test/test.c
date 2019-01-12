#include "apue.h"

int 
main(int argc,char *argv[])
{
    for(int i = 0; i < argc;i++) {
        printf("%s\n",argv[i]);
    }
    if(argc < 2) {
        err_msg("%s\n","pleas input error number");
    }
    err_exit(atoi(argv[1]),"%s","error test");
    return 0;
}