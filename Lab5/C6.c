#include <stdio.h>

int strLen(char* str)
{
    int len = 0;
    //while (*str != NULL) { raises comparison b/n pointer and integer.
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void main()
{
    char str[] = "Aymen";
    printf("Length is %d\n", strLen(str));
}