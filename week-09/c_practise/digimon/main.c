#include <stdio.h>
#include "digimon.h"
#include <string.h>


/*  * 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 */

int main()
{

    data_t digimons[4] = {{.name = "Digimon1", .age = 10, .health = 70, .tamer_name = "Tamer1", .type = ROOKIE},
                          {.name = "Digimon2", .age = 7, .health = 80, .tamer_name = "Tamer2", .type = BABY},
                          {.name = "Digimon3", .age = 12, .health = 60, .tamer_name = "Tamer1", .type = ROOKIE},
                          {.name = "Digimon4", .age = 18, .health = 65, .tamer_name = "Tamer1", .type = MEGA}
};

    int length = sizeof(digimons)/ sizeof(digimons[0]);





    printf("The index number of the sickest digimon is: %d.\n", get_minimum_health_index(digimons, length));
    printf("The number of 'ROOKIE' level digimons are: %d.\n", get_same_digi_level_count(digimons, length, ROOKIE));
    printf("The number of 'Tamer1' tamer-name is: %d.\n", get_same_tamer_count(digimons, length, "Tamer1"));



    return 0;
}