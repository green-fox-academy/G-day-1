#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int number_of_lines(FILE* x);

int main ()
{
    FILE* name = fopen("../my-file.txt", "r");

    printf("%d", number_of_lines(name));

    fclose(name);

    return 0;
}

int number_of_lines(FILE* x)
{
    int counter = 0;
    char singleLine[150];

    while(!feof(x)){
        fgets(singleLine, 150, x);
        counter++;
    }
    return counter;

}