#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search(char *string, char character);
int search2(char *string, char *character);

int main()
{
    char *first = "embedded";
    char *second = "d";
    char c = 'd';

    printf("%d\n", search(first, c));
    printf("%d", search2(first, second));

    return 0;
}

int search(char *string, char character)  //  <<<<<<<<<------------ ELSŐ MEGOLDÁS
{
    for (int i = 0; i < strlen(string); ++i) {
        if (string[i] == character){
            return i;
        }
    }
    return -1;
}

int search2(char *string, char *character)  // <<<<<<<<<<<*------------------- 2. MEGOLDÁS
{
    for (int i = 0; i < strlen(string); ++i) {
        if(string[i] == character[0]){
            return i;
        }

    }
    return -1;
}