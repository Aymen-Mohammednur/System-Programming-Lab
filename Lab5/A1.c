#include <stdio.h>

void main()
{
    int myInt = 1;
    double myDouble = 1.0;
    char* myString = "Hi";

    int *p1;
    double *p2;
    p1 = &myInt;
    p2 = &myDouble;

    printf("%p\n", p1);
    printf("%p\n", p2);
    printf("%p\n", &myString);
}