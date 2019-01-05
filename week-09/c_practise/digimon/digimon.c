#include "digimon.h"
#include <string.h>

char* get_digi_level(enum digi_level x)
{
    switch(x){
        case BABY:
            return "baby";
        case IN_TRAINING:
            return "in-training";
        case ROOKIE:
            return "rookie";
        case CHAMPION:
            return "champion";
        case ULTIMATE:
            return "ultimate";
        case MEGA:
            return "mega";
    }
}

int get_minimum_health_index(data_t array[], int length)
{
    int max = 100;
    int min = 0;
    int index = 0;

    for (int i = 0; i < length; ++i) {
        if(max - array[i].health > min) {
            min = max - array[i].health;
            index = i;
        }}

    return index;
}

int get_same_digi_level_count(data_t array[], int length, digi_level_t x)
{

    int counter = 0;

    for (int i = 0; i < length; ++i) {
        if(array[i].type == x){
            counter++;
        }}
    return counter;
}

int get_same_tamer_count(data_t array[], int length, char x[])
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(!strcmp(array[i].tamer_name, x))
        {
            counter++;
        }}
    return counter;
}

