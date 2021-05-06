#include <stdio.h>

double toCelsius (double fahrenheit);
double toFahrenheit (double celsius);

void main()
{   
    int choice;
    printf("Program to convert between Celsius and Fahrenheit\n\n");
    printf("1 for Celsius to Fahrenheit\n2 for Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    if (choice == 1) {
        double celsius;
        printf("Enter Celsius temperature: ");
        scanf("%lf", &celsius);
        printf("Fahrenheit temperature is: %lf\n", toFahrenheit(celsius));
    }
    else if (choice == 2) {
        double fahrenheit;
        printf("Enter fahrenheit temperature: ");
        scanf("%lf", &fahrenheit);
        printf("Celsius temperature is: %lf\n", toCelsius(fahrenheit));
    }
    else {
        printf("ERROR!\n");
    }
}

double toCelsius (double fahrenheit)
{
    double celsius = ((fahrenheit - 32) * 5) / 9;
    return celsius;
}

double toFahrenheit (double celsius)
{
    double fahrenheit = ((celsius * 9) / 5) + 32;
    return fahrenheit;
}