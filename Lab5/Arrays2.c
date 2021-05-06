#include <stdio.h>

int main() 
{   
    int ARRAYSIZE = 10;
    int age[ARRAYSIZE];

    printf("Enter 10 ages: ");
    for(int i = 0; i < ARRAYSIZE; ++i) {
        scanf("%d", &age[i]);
    }

    int maxage = age[0], person;
    for (person = ARRAYSIZE-1; person >= 0; --person) 
    {
        if (age[person] > maxage ) maxage=age[person];
    }

    int sum = 0, i=0;
    while (i < ARRAYSIZE)
    {
        sum += age[i];
        i++;
    }
    float average = sum / ARRAYSIZE;

    printf("\nThe maximum age is = %d \n", maxage);
    printf("The average age is = %lf \n", average);

    // SWAP
    int temp = age[3];
    age[3] = age[8];
    age[8] = temp;

    printf("After swapping the two ages, the array becomes\n");
    for(int i = 0; i < ARRAYSIZE; ++i) {
        printf("%d ", age[i]);
    }
    printf("\n");

    return 0;
}