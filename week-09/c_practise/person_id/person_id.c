#include "person_id.h"

char* get_qualification_type (enum qualification x) {
    switch (x) {
        case ELEMENTARY_SCHOOL:
            return "elementary-school";
        case HIGH_SCHOOL:
            return "high-school";
        case BSC_DEGREE:
            return "BSC-degree";
        case MASTER_DEGREE:
            return "master-degree";
        case PHD:
            return "PHD";
    }
}

int get_oldest_alive(person_t array[], int length)
{
    int oldest = 0;
    int index = 0;

    for (int i = 0; i < length; ++i) {
        if(2018 - array[i].year_of_birth > oldest){
            oldest = 2018 - array[i].year_of_birth;
            index = i;
        }}
    return 2018 - array[index].year_of_birth;
}

int get_qualification_count(person_t array[], int length)
{
    int counter = 0;

    for (int i = 0; i < length; ++i) {
        if(array[i].type == HIGH_SCHOOL){
            counter++;
        }}
    return counter;
}

int get_qualification_count2(person_t array[], int length, qualification_t type)
{
    int counter = 0;

    for (int i = 0; i < length; ++i) {
        if(array[i].type == type) {
            counter++;
        }}
    return counter;
}
