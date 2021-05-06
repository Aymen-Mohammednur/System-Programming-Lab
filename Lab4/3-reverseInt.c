#include <stdio.h>

int reverse(int num);

void main()
{   
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Reversed number is: %d\n", reverse(num));
    printf("Double of the reversed number is: %d\n", 2 * reverse(num));
}

int reverse(int num)
{
    int remainder;
    int reversed = 0;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}