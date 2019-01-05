#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{
    FILE* name = fopen("../my-file.txt", "w");
    fprintf(name, "Barta G");
    fclose(name);

    return 0;
}