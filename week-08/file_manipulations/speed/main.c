#include <stdio.h>
#define DISTANCE 345

// fix the program so it prints out the correct result!

int main()
{
    int seconds = 17;
    float speed = DISTANCE / seconds;

    printf("%.2lf", speed);

    return 0;
}