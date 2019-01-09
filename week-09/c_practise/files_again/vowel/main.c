#include <stdio.h>
#include <stdlib.h>
#include "vowels.h"
#include <string.h>


int main()
{
    char* path = "../text.txt";
    char temp_array[257];

    read_from_file(path, temp_array);
    strlwr(temp_array);

    printf("%s\n", temp_array);



    char* path2 = "../lol.txt";
    char character[101];
    write_to_file(path2, temp_array, character);

    return 0;
}