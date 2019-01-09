#ifndef RUN_RUN_H
#define RUN_RUN_H

typedef enum country{
    HUN,
    ENG,
    GER,
    IT
}country_t;

typedef struct data{
    char name[256];
    int result;
    country_t country;

}data_t;


data_t randomize_competitors(data_t* competitors, int number_of_competitors);
char* fastest_guy(data_t* competitors, int size);
int competitors_from_hun(data_t* competitors, int size, country_t valami);
char* get_country(enum country x);





#endif //RUN_RUN_H
