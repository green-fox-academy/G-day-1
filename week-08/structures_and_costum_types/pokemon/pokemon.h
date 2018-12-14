#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

typedef enum type {
    NORMAL,
    FIRE,
    WATER,
    ELECTRIC,
    GRASS,
    ICE,
    FIGHTNING,
    POISON,
    FLYING
}type_t;

typedef struct data{
    char name[256];
    int age;
    double strength;
    double speed;
    type_t type;

}data_t;

char* get_type(enum type x);
int get_faster_pokemon(data_t array[], int length, int given_speed);
int get_type_pokemon(data_t array[], int length, type_t x);
char* get_strongest_type(data_t array[], int length, int strength);
double get__max_stregth_of_type(data_t array[], int length, type_t x);

#endif