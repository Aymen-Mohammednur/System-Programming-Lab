#include <stdio.h>
#include "head.h"

void swap() {
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
}

void display() {
    printf("\nElement 0: %d\n", array[0]);
    printf("\nElement 1: %d\n\n", array[1]);
}
