#ifndef PERSON_ID_PERSON_ID_H
#define PERSON_ID_PERSON_ID_H

typedef enum qualification{
    ELEMENTARY_SCHOOL,
    HIGH_SCHOOL,
    BSC_DEGREE,
    MASTER_DEGREE,
    PHD
}qualification_t;

typedef struct person{
    char name[256];
    int year_of_birth;
    qualification_t type;
}person_t;

char* get_qualification_type (enum qualification x);
int get_oldest_alive(person_t array[], int length);
int get_qualification_count(person_t array[], int length);
int get_qualification_count2(person_t array[], int length, qualification_t type);

#endif
