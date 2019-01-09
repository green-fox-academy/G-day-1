#include <stdio.h>
#include <string.h>
#include "run.h"

int main() {


    int number_of_competitors = 4;

    data_t competitors[4] = {{.name = "Pesta", .country = HUN},
                             {.name = "DelPiero", .country = IT},
                             {.name = "Anya", .country = HUN},
                             {.name = "Schweinsteiger", .country = GER}};


    int length = sizeof(competitors)/ sizeof(competitors[0]);

    randomize_competitors(competitors, number_of_competitors);
    printf("The winner is: %s.\n", fastest_guy(competitors, length));
    printf("------------------------------------\n");
    printf("The number of competitors from HUNGARY is: %d.\n", competitors_from_hun(competitors, length, HUN));



    return 0;
}

