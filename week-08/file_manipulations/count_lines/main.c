#include <stdio.h>
#include <string.h>

int number_of_lines(FILE *name);

int main ()
{
    FILE *myFile = NULL;
    number_of_lines(myFile);

    return 0;
}

int number_of_lines(FILE *name)
{
    int countLines = 0;
    name = fopen("../my-file.txt", "r");
    char singleLine[150];
    while(!feof(name)){
        fgets(singleLine, 150, name);
        countLines++;
    }
    printf("%d", countLines);
}