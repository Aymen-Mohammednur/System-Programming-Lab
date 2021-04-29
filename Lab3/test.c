#include <stdio.h>
#define MAX 256
#define double(x) (x + x)

int add (int x, int y);

void main ()
{
    int x = 25;
    int y = 35;
    int result = add(x, y);
    int x2 = double(x);
    int y2 = double(y);
    int z = MAX + 5;
    printf("The summation is %d \n", result);
    printf("The double value of x is %d \n", x2);
    printf("Z is %d \n", z);
}

int add (int x, int y) {
    int result = x + y;
    return result;
}
