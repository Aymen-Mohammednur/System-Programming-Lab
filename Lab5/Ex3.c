#include <stdio.h>

void main()
{
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);
    int ARRAYSIZE = 10;
    int repeated[ARRAYSIZE];

    while(num > 0){
        rem = num % 10;
        repeated[rem] += 1;
        num = num / 10;
    }

    printf("Digits:      ");
    for(int i = 0; i < ARRAYSIZE; i++)
    { 
        printf("%d  ", i);
    }

    printf("\nOccurrences: ");
    for(int i = 0; i < ARRAYSIZE; i++)
    { 
        printf("%d  ", repeated[i]);
    }
}