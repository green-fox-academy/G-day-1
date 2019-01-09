#include "run.h"
#include <stdlib.h>
#include <time.h>


data_t randomize_competitors(data_t* competitors, int number_of_competitors){
    srand(time(NULL));
    for (int i = 0; i < number_of_competitors; ++i) {
        int r = rand() % number_of_competitors;
        data_t temp;
        temp = competitors[r];
        int s = rand() % number_of_competitors;
        if(s == r){
            if(s==0){
                competitors[0] = competitors[number_of_competitors];
                competitors[number_of_competitors] = temp;
            }else{
                competitors[s] = competitors[s - 1];
                competitors[s-1] = temp;
            }
        }else{
            competitors[r] = competitors[s];
            competitors[s] = temp;
        }
    }
    return *competitors;
}

char* fastest_guy(data_t* competitors, int size)
{
    return competitors[0].name;
}

int competitors_from_hun(data_t* competitors, int size, country_t valami) {
    int counter = 0;

    for (int i = 0; i < size; ++i) {
        if (competitors[i].country == valami){
            counter++;
        }
    }
    return counter;
}

char* get_country(enum country x) {
    switch (x) {
        case HUN:
            return "hungary";
        case GER:
            return "germany";
        case ENG:
            return "england";
        case IT:
            return "italy";
    }}

