#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main ()
{
    FILE* name = fopen("../my-file.txt", "r");
    char singleLine[150];
    while(!feof(name)) {
        fgets(singleLine, 150, name);
        puts(singleLine);
    }
    return 0;
}