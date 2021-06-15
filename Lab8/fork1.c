#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void main()
{
    pid_t pid = fork();
    int x = 25;
    if(pid == 0) // child process returned
    {
        x += 5;
        printf("\nChild! process id: %d\n",getpid()); // child process id
        printf("Child! parent process id: %d\n",getppid()); // child's parent pid
        printf("Child! parent process id: %d\n",getppid());
        printf("The value of x is: %d\n",x);
    }
    else // parent proces returned
    {
        x -= 5;
        printf("Parent! process id: %d\n",getpid()); // parent process id
        printf("Parent! parent process id: %d\n",getppid()); // parent's parent pid
        printf("The value of x is: %d\n",x);
    }
    printf("Good bye from process with id : %d\n",getpid()); // goodbye id, executed by both processes
}
