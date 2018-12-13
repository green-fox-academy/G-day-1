#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct coordinates{
    int x;
    int y;
}coordinates_t;

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

int main()
{
    srand(time(NULL));

    coordinates_t array[5];
    for (int i = 0; i < 5; ++i) {
        array[i].x = rand() % 100;
        array[i].y = rand() % 100;
        printf("Nums: %d, %d.\n", array[i].x, array[i].y);
    }

    return 0;
}
