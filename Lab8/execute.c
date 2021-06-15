#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() 
{
    char *newargs[4];
    pid_t childpid;

    newargs[0] = "mkdir";
    newargs[1] = "aymen";
    // newargs[2] = "/bin";
    newargs[3] = NULL; /* Indicate end of args array */

    childpid = fork();
    if (childpid == 0) 
    {   /* child code */
        execv("/bin/mkdir", newargs);
    }
    else
    {   /* parent code */
        wait(NULL); /*wait for child to finish */
    }
}
