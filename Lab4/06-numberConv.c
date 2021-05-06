#include <math.h>
#include <stdio.h>

long toBinary(int decimal);
int toDecimal(long binary);

void main()
{
    int choice;
    printf("Program to convert between Decimal and Binary\n\n");
    printf("1 for Binary to Decimal\n2 for Decimal to Binary\n");
    scanf("%d", &choice);
    if (choice == 1) {
        long binary;
        printf("Enter binary number: ");
        scanf("%ld", &binary);
        printf("Decimal equivalent is: %d\n", toDecimal(binary));
    }
    else if (choice == 2) {
        int decimal;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        printf("Binary equivalent is: %ld\n", toBinary(decimal));
    }
    else {
        printf("ERROR!\n");
    }
}

long toBinary(int decimal)
{
    long binary = 0;
    int remainder, i = 1;
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int toDecimal(long binary)
{
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}