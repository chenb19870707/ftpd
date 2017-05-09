#ifndef _COMMON_H_
#define _COMMON_H_

#undef _POSIX_SOURCE  
#include <unistd.h>
#include <fcntl.h>


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <crypt.h>

#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/types.h>
#include <pwd.h>
#include <shadow.h>

#include <sys/stat.h>
#include <sys/time.h>
#include <time.h>
#include <sys/stat.h>
#include <dirent.h>
#include <linux/capability.h>
#include <sys/syscall.h>
#include <sys/sendfile.h>
#include <signal.h>
#include <wait.h>






#define ERR_EXIT(m)                 \
            do                      \
            {                       \
                perror(m);          \
                exit (EXIT_FAILURE);\
            }while(0)               \

#define MAX_COMMAND_LINE 1024
#define MAX_COMMAND 32
#define MAX_ARG 1024
#define FTPD_CONF "ftpd.conf"

#endif