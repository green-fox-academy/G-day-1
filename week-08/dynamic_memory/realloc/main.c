#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int x = 0;
    int y = 0;
    int* pointer = NULL;
    printf("Give me a number.\n");
    scanf("%d", &x);

    pointer = (int*)malloc(x * sizeof(int));

    printf("Now enter %d numbers.\n", x);
    for (int i = 0; i < x; ++i) {
        scanf("%d,", &pointer[i]);      //HA \n-ezek, szintén nem megy.
        y += pointer[i];
    }

    printf("Y : %d.\n", y);
    pointer = (int*)realloc(pointer, y * sizeof(int));

    for (int j = 1; j <= y; ++j) {
        pointer[j] = j;
        printf("%d\n", pointer[j]);
    }

    free(pointer);

    return 0;
}