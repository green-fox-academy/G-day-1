#include <stdio.h>
#include <string.h>
typedef struct pirate{
    char name[256];
    int has_wooden_leg;
    short int gold_count;
}pirate_t;

int sum_of_gold(pirate_t my_array[], int length);
double average_gold(pirate_t my_array[], int length);
char* richest_that_has_wooden_leg(pirate_t my_array[], int length);

int main()
{
    pirate_t array[3] = {{.name = "Johny", .has_wooden_leg = 1, .gold_count = 50},
                         {.name = "Gergo", .has_wooden_leg = 0, .gold_count = 40},
                         {.name = "MasikGergo", .has_wooden_leg = 1, .gold_count = 55}};

    int length = sizeof(array)/ sizeof(array[0]);

    printf("Sum of gold: %d\n", sum_of_gold(array, length));
    printf("Average gold: %.2lf.\n", average_gold(array, length));
    printf("Richest guy that has wooden leg: %s", richest_that_has_wooden_leg(array, length));

    return 0;
}

int sum_of_gold(pirate_t my_array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += my_array[i].gold_count;
    }
    return sum;
}

double average_gold(pirate_t my_array[], int length)
{
    double avg = 0;
    avg = (double) sum_of_gold(my_array, length) / length;
    return avg;
}

char* richest_that_has_wooden_leg(pirate_t my_array[], int length)
{
    int max = 0;
    for (int i = 0; i < length; ++i) {
        if (my_array[i].has_wooden_leg == 1) {
            if (my_array[i].gold_count >= my_array[max].gold_count) {
                max = i;
            }
        }
    }
    return my_array[max].name;
}