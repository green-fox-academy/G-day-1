#include "most_words.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


// Find the most common word in file.txt
// You need to make sure that characters like commas, colons, etc are not part of the words.
// Also make it case sensitive so words that only different in case sensitivity are the same.

int main()
{
    char* path = "../my_file.txt";

   // printf("%d\n", check_how_many_words(path));

    read_from_file(path);


    return 0;
}