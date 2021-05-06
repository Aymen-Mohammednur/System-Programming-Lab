#include <stdio.h>

int countDigits(int num) 
{   
    int count = 0;
    while (num != 0) {
        num /= 10;   
        ++count;
    }
    return count;
}

void main()
{
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);
    int ARRAYSIZE = countDigits(num);
    int repeated [10] ={0};

    while(num > 0){
        rem = num % 10;
        repeated[rem] += 1;
        num = num / 10;
    }

    int count = 0;
    for(int i = 0; i < ARRAYSIZE; i++)
    { 
        if(repeated[i] == 1){
            continue;
        }
        else if (repeated[i] > 1){
            printf("%d repeated %d times\n", i, repeated[i]);
            count++;
        }
    }

    if(count == 0) printf("No repeated digits.\n");
}