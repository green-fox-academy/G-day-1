#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void write_multiple_lines(FILE* path, char word[256], int number);

int main()
{
    FILE* myFile = fopen("../my-file.txt", "w");
    char word[256];
    int number;

    printf("Give me a word and a number, please! :)\n");
    scanf("%s\n %d", word, &number);

    write_multiple_lines(myFile, word, number);

    return 0;
}

void write_multiple_lines(FILE* path, char word[256], int number)
{
    for (int i = 0; i < number; ++i) {
        fprintf(path, "%s\n", word);
    }
    fclose(path);
}
