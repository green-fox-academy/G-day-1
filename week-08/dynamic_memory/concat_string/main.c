#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* concat_strings(char* x, char* y);
int main()
{
    char *first_text = "-Hellooo, wazzup?\t";
    char *second_text = "-Everything is cool. ;)";

    concat_strings(first_text, second_text);

    return 0;
}

char* concat_strings(char* x, char* y)
{
    size_t size = strlen(x) + strlen(y) +1;
    char* ptr = (char*)calloc(size, sizeof(char));   //HA MALLOCCAL CSINÁLOM, SZAR.

    strcat(ptr, x);
    strcat(ptr, y);

    printf("%s", ptr);
}
