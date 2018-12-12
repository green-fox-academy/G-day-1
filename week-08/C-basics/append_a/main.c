#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *append_a(char x[]);

int main()
{
    char *input[100];
    printf("Gimme a WORD!\n");
    scanf("%s", input);

    printf(append_a(input));

    return 0;
}

char *append_a(char x[])
{
    strcat(x, "a");
    return x;

}