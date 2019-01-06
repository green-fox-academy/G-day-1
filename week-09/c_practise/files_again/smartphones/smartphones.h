#ifndef SMARTPHONES_SMARTPHONES_H
#define SMARTPHONES_SMARTPHONES_H

typedef enum screen_size{
    SMALL,
    MEDIUM,
    BIG
}screen_size_t;

typedef struct smartphone{
    char name[256];
    int year;
    screen_size_t type;

}smartphone_t;

int read_from_file(char* path, smartphone_t* array);
char* get_screen_size(smartphone_t array[], int index);
char* get_oldest_phone(smartphone_t array[], int length);
int get_screen_size_count(smartphone_t array[], int length, enum screen_size screensize);


#endif //SMARTPHONES_SMARTPHONES_H

