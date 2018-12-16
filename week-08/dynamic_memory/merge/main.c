#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int size = 10;
    printf("First array:\n");
    int* pointer = NULL;
    pointer = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < size; ++i) {
        pointer[i] = i * 2;
        printf("%d, ", pointer[i]);
    }

    printf("\nSecond array:\n");
    int* pointer2 = NULL;
    pointer2 = (int*)malloc(10 * sizeof(int));
    for (int j = 0; j < size; ++j) {
        pointer2[j] = j * 2 + 1;
        printf("%d, ", pointer2[j]);
    }

    printf("\nThird, mixed array:\n");

    pointer = (int *)realloc(pointer, 20 * sizeof(int));

    for (int i = 9; i > -1; i--) {
        pointer[size + i] = pointer2[i];
        printf("%d, %d, ", pointer[size + i], pointer[i]);
    }

    free(pointer);
    free(pointer2);

    return 0;
}
