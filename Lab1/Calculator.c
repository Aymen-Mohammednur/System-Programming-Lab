#include <stdio.h>
#include <stdlib.h>

double add(double fNum, double sNum){
    return fNum + sNum;
}

double sub(double fNum, double sNum){
    return fNum - sNum;
}

double mul(double fNum, double sNum){
    return fNum * sNum;
}

double divide(double fNum, double sNum){
    return fNum / sNum;
}

int main()
{   
    int choice;
    printf("Choose Operation\n");
    printf("1 for Addition\n");
    printf("2 for Subtraction\n");
    printf("3 for Multiplication\n");
    printf("4 for Division\n");
    scanf("%d", &choice);

    double fNum, sNum;
    if (choice == 1) {
        printf("Enter the first number: ");
        scanf("%lf", &fNum);
        printf("Enter the second number: ");
        scanf("%lf", &sNum);

        double sum = add(fNum, sNum);
        printf("The sum is %f\n", sum);
    }

    else if (choice == 2) {
        printf("Enter the first number: ");
        scanf("%lf", &fNum);
        printf("Enter the second number: ");
        scanf("%lf", &sNum);

        double diff = sub(fNum, sNum);
        printf("The difference is %f\n", diff);
    }

    else if (choice == 3) {
        printf("Enter the first number: ");
        scanf("%lf", &fNum);
        printf("Enter the second number: ");
        scanf("%lf", &sNum);

        double product = mul(fNum, sNum);
        printf("The product is %f\n", product);
    }

    else if (choice == 4) {
        printf("Enter the first number: ");
        scanf("%lf", &fNum);
        printf("Enter the second number: ");
        scanf("%lf", &sNum);
        
        if (sNum != 0) {
            double quotient = divide(fNum, sNum);
            printf("The quotient is %f\n", quotient);
        }
        else {
            printf("Can not divide by Zero!\n");
        }
    }

    else {
        printf("Invalid Choice!");
    }

    return 0;
}