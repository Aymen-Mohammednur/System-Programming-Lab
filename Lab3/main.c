#include <stdio.h>
#include "head.h"

void swap();
void display();
int array[2] = {25, 50};
void main()
{
    printf("\nBefore Swap\n");
    display();
    swap();
    printf("\nAfter Swap\n");
    display();
}
