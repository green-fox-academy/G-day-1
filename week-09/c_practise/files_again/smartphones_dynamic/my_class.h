#ifndef SMARTPHONES_DYNAMIC_MY_CLASS_H
#define SMARTPHONES_DYNAMIC_MY_CLASS_H

typedef enum age{
    NEW,
    MEDIUM,
    OLD
}age_t;

typedef struct data{
    char* name;
    age_t age;
    int screen_size;
}data_t;

int check_array_size(char* path);
int read_from_file(char* path, data_t* array);
char* get_age(data_t* array, int index);

#endif //SMARTPHONES_DYNAMIC_MY_CLASS_H
