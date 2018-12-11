#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int are_the_same(char* string1, char* string2);

int main()
{
    char* x = "JeSus";
    char* y = "Jesus";

    if(are_the_same(x, y) == 1){
        printf("Cool, works!");
    }else{
        printf("Doesn't work.");
    }
    return 0;
}

int are_the_same(char* string1, char* string2)
{
    if(0 == strcmp(string1, string2)) {
        return 1;
    }else{
        return 0;
    }
}
