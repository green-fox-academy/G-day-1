#include "pokemon.h"

char* get_type(enum type x) {
    switch (x) {
        case NORMAL:
            return "normal";
        case FIRE:
            return "fire";
        case WATER:
            return "water";
        case ELECTRIC:
            return "electric";
        case GRASS:
            return "grass";
        case ICE:
            return "ice";
        case FIGHTNING:
            return "fightning";
        case POISON:
            return "poison";
        case FLYING:
            return "flying";
    }
}

int get_faster_pokemon(data_t array[], int length, int given_speed)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(array[i].speed > given_speed){
            counter++;
        }
    }
    return counter;
}

int get_type_pokemon(data_t array[], int length, type_t x)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(array[i].type == x){
            counter++;
        }
    }
    return counter;

}
char* get_strongest_type(data_t array[], int length, int strength)
{
    int max = 0;
    int index;

    for (int i = 0; i < length; ++i) {
        if(array[i].strength > max){
            max = array[i].strength;
            index = i;
        }
    }
    return get_type(array[index].type);
}

double get__max_stregth_of_type(data_t array[], int length, type_t x)
{
    int max = 0;
    int index;


    for (int i = 0; i < length; ++i) {
        if(x == array[i].type){
            if(array[i].strength > max){
                max = array[i].strength;
                index = i;
            }
        }

    }
    return array[index].strength;
}
