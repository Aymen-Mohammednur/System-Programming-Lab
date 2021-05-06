#include <stdio.h>
#include <stdlib.h>

struct w_type
{
    int highTemp;
    int lowTemp;
    double precipitation;
};

typedef struct w_type WeatherDay;

void printWD(WeatherDay *day)
{
    printf("High temperature is: %d\n", day->highTemp);
    printf("High temperature is: %d\n", day->lowTemp);
    printf("Precipitation is: %lf\n", day->precipitation);
}

void intialize(WeatherDay *day)
{
    day->highTemp = 0;
    day->lowTemp = 0;
    day->precipitation = 0.0;
}

float avgTemp(WeatherDay *day)
{
    float average = (day->highTemp + day->lowTemp) / 2;

    return average;
}

int main() 
{
    WeatherDay day1;
    WeatherDay *dayptr; 
    dayptr = &day1;

    // printf("Enter highTemp: ");
    // scanf("%d", &dayptr->highTemp);
    // printf("Enter lowTemp: ");
    // scanf("%d", &dayptr->lowTemp);
    // printf("Enter precipitation: ");
    // scanf("%lf", &dayptr->precipitation);

    // printf("\n");
    // printWD(dayptr);

    // float average = avgTemp(dayptr);
    // printf("Average temperature is: %lf\n", average);

    // intialize(dayptr);
    // printWD(dayptr);

    WeatherDay *dayArray;
    dayArray = malloc(5 * sizeof(WeatherDay));

    dayArray[2].highTemp = 30;
    dayArray[2].lowTemp = 10;
    dayArray[2].precipitation = 60;

    printWD(&dayArray[2]);
    float average3rd = avgTemp(&dayArray[2]);
    printf("Average temp of third element is: %lf\n", average3rd);

    for (int i = 0; i < 5; i++) {
        if (i != 2) {
            dayArray[i].highTemp = 0;
            dayArray[i].lowTemp = 0;
            dayArray[i].precipitation = 0.0;
        }
    }

    free(dayArray);

    return 0;
}