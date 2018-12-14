#include <stdio.h>
#include <string.h>

int main ()
{
    FILE * name;
    name = fopen("../my-file.txt", "r");

    char singleLine[150];
    while(!feof(name)){
        fgets(singleLine, 150, name);
        puts(singleLine);
    }

    fclose(name);

    return 0;
}