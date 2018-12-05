#include <stdio.h>
#include "time.h"
#include "stdlib.h"
int main() {

    srand(time(NULL));
    int generatedNumber = rand() % 100;

    printf("Hi, guess my number! ;) /Help: it's between 0-100./\n");

    int userNumber;
    int lives = 5;

    while(lives > 0) {
        scanf("%d", &userNumber);
        if (generatedNumber > userNumber) {
            printf("Too low, you have %d lives left\n", lives - 1);
        } else if (generatedNumber == userNumber) {
            printf("CONGRATS! YOU WON!");
            return 0;
        } else if (generatedNumber < userNumber) {
            printf("Too high, you have %d lives left", lives - 1);
        }
        lives--;
    }
        printf("You died. :(\n");
        printf("The generated number was: %d", generatedNumber);


    return 0;
}