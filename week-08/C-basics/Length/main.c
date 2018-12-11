#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int returnTheLengthOfName(char* x);

int main()
{
    char * name;
    printf("What's your name?\n");
    scanf("%s", &name);

    printf("%d", returnTheLengthOfName((char *) &name));

    return 0;
}

int returnTheLengthOfName(char* x) {
    return strlen(x);
}