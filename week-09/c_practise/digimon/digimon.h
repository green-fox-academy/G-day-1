#ifndef DIGIMON_DIGIMON_H
#define DIGIMON_DIGIMON_H

typedef enum digi_level{
    BABY,
    IN_TRAINING,
    ROOKIE,
    CHAMPION,
    ULTIMATE,
    MEGA
}digi_level_t;

typedef struct data{
    char name[128];
    int age;
    int health;
    char tamer_name[256];
    digi_level_t type;

}data_t;

char* get_digi_level(enum digi_level x);
int get_minimum_health_index(data_t array[], int length);
int get_same_digi_level_count(data_t array[], int length, digi_level_t x);
int get_same_tamer_count(data_t array[], int length, char x[]);


#endif