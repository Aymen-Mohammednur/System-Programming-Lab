#include <stdio.h>

void main()
{
    int x = 0x66;
    int y = 0x39;

    printf("x & y = %d\n", x & y);
    printf("x & y = %d\n", x | y);
    printf("x & y = %d\n", ~x | ~y);
    printf("x & y = %d\n", x & !y);
    printf("x & y = %d\n", x && y);
    printf("x & y = %d\n", x || y);
    printf("x & y = %d\n", !x && ~y);
    printf("x & y = %d\n", x && ~y);
}