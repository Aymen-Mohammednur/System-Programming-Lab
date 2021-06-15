#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void main()
{
    pid_t pid = fork();
    int x = 25;
    if(pid == 0)
    {
        x += 5;
        printf("\nChild! process id: %d\n",getpid());
        printf("Child! parent process id: %d\n",getppid());
        printf("Child! parent process id: %d\n",getppid());
        printf("The value of x is: %d\n",x);
    }
    else
    {
        x -= 5;
        printf("Parent! process id: %d\n",getpid());
        printf("Parent! parent process id: %d\n",getppid());
        printf("The value of x is: %d\n",x);
        sleep(10);
    }
    printf("Good bye from process with id : %d\n",getpid());
}
