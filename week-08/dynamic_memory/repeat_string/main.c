#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition
// is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char* repeat_string(char* x, int y);

int main()
{
    char *string = "Baba";
    int number;

    printf("Please enter a word, and a number.\n");  // If user gives the 'word', doesnt work?! :(
    scanf("%d", &number);

    repeat_string(string, number);

    return 0;
}

char* repeat_string(char* x, int y)
{
    size_t size = strlen(x) * y;

    char* memory_allocation = (char*)calloc(size, sizeof(char));
    strcat(memory_allocation, x);

    for (int i = 0; i < y; ++i) {
        printf("%s", memory_allocation);
    }
    free(memory_allocation);
    return memory_allocation;

}