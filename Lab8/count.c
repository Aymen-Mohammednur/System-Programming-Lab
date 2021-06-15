#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    int n = 0;
    /* Findout if any word passed to program */
    if(argc == 1) 
    {
        printf("No word to examine. \n");
        exit(0);
    }
    /* Loop to count characters */
    while(argv[1][n++] != '\0');

    /*print result */
    printf("The word %s has %d characters .\n",argv[1],n);
}
