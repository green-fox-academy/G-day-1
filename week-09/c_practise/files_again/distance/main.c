#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance_between_two_ses(char array[], char char_s);

int main ()
{
    char str[] = "This is a sample string";
    char s = 's';
    char *first, *last;

    distance_between_two_ses(str, s);
    return 0;
}

int distance_between_two_ses(char array[], char char_s)
{
    char *first = 0;
    char *last = 0;

    first = strchr(array, char_s);
    last = strrchr(array, char_s);

    printf("The difference between the first and last appearance of 's' is: %d.", (int) (last - first));


}
