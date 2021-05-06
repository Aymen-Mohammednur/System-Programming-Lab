#include <stdio.h>
#include <stdlib.h>

char* strCopy(char str1[])
{
    char *str2, *p1, *p2;
    
    str2 = (char*)malloc(10);
    p1 = str1;
    p2 = str2;
    
    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';

    return str2;
}

void main()
{
    char str1[10] = "Aymen";
    char* str2;

    str2 = strCopy(str1);
    printf("Original String: %s\n", str1);
    printf("Copied String: %s\n", str2);
}