#include <stdio.h>
#include "pokemon.h"

int main()
{
    data_t my_array[6] = {{.name = "Pokemon1", .age = 12, .strength = 9.6, .speed = 2.5, .type = FLYING},
                          {.name = "Pokemon2", .age = 15, .strength = 5.5, .speed = 8.5, .type = ELECTRIC},
                          {.name = "Pokemon3", .age = 82, .strength = 9.2, .speed = 9, .type = GRASS},
                          {.name = "Pokemon4", .age = 11, .strength = 2.4, .speed = 1.5, .type = ICE},
                          {.name = "Pokemon5", .age = 5, .strength = 6.7, .speed = 5.6, .type = NORMAL},
                          {.name = "Pokemon6", .age = 22, .strength = 10.0, .speed = 2.8, .type = NORMAL}
    };
    int length = sizeof(my_array)/ sizeof(my_array[0]);

    printf("Number of faster pokemons, than 6 is:  %d.\n", get_faster_pokemon(my_array, length, 6));
    printf("Number of '%s' type pokemons is: %d.\n", get_type(NORMAL), get_type_pokemon(my_array, length, NORMAL));
    printf("The type of the strongest pokemon is: '%s'.\n", get_strongest_type(my_array, length, 6));
    printf("Strength of the strongest pokemon in type '%s' is: %0.1lf.", get_type(ICE), get__max_stregth_of_type(my_array, length, ICE));

    return 0;
}
