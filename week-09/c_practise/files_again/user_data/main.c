#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
    char data[128] = "Barta Gergo 25";

    char* word = strtok(data, " ");
    char* first_name = word;
    word = strtok(NULL, " ");
    char* last_name = word;
    word = strtok(NULL, " ");
    char* age = word;
    int agenumber = atoi(age);

    printf("Your name is: %s %s and you are %d years old.", first_name, last_name, agenumber);


    return 0;
}