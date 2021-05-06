#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int x;
    srand(time(NULL));
    x = rand() % 10;
    int count = 0;
    int guess;
    while (count < 5) {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess == x) {
            printf("You are correct!\n");
            break;
        }
        else if (guess < x) {
            printf("Guess is lower\n");
            count++;
        }
        else if (guess > x) {
            printf("Guess is higher\n");
            count++;
        }
    }
}