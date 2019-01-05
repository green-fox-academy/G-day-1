#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found
void list_all_positions(char array[], char char_i);

int main ()
{

    char string[55] = "This is a string for testing";
    char *p = 'i';

    list_all_positions(string, p);


    return 0;
}

void list_all_positions(char array[], char char_i)
{
    int length = strlen(array);

    for (int i = 0; i < length; ++i) {
        if(array[i] == char_i)
        {
            printf("%d, ", i);
        }
    }

}