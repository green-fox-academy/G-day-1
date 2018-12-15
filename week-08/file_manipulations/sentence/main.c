#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void print_out(char array[]);

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    gets(string);

    print_out(string);

    return(0);
}

void print_out(char array[])
{
    char *word = strtok(array, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }
}