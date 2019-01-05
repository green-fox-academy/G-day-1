#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void write_to_file(FILE* x, char word[256], int number);

int main()
{
    FILE* my_File = fopen("../my-file.txt", "w");

    char my_word[256];
    int my_number;
    printf("Plz, gimme a word and a number.\n");
    scanf("%s %d", my_word, &my_number);

    write_to_file(my_File, my_word, my_number);

    fclose(my_File);
    
    return 0;
}

void write_to_file(FILE* x, char word[256], int number)
{
    for (int i = 0; i < number; ++i) {
        fprintf(x, "%s\n", word);
    }
}