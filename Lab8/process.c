#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void main(){
    printf("This is the process id %d\n", getpid());
    printf("This is the process id of the parent %d\n", getppid());
}
