#include "my_class.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int check_array_size(char* path) {
    FILE *fpointer = fopen(path, "r");

    char line[256];
    int counter = 0;
    if (fpointer == NULL) {
        printf("Cannot find file.");
        return -1;
    } else {
        while (fgets(line, sizeof line, fpointer) != NULL) {
            counter++;
        }
    } return counter;
}

int read_from_file(char* path, data_t* array)
{
    FILE *fpointer = fopen(path, "r");

    char line[256];
    int counter = 0;
    int i = 0;

    if (fpointer == NULL) {
        printf("Cannot find file.");
        return -1;
    } else {
        while (fgets(line, sizeof line, fpointer) != NULL) {
            char *word = strtok(line, " ");
            array[i].name = malloc((strlen(word) + 1) * sizeof(char));
            strcpy(array[i].name, word);

            word = strtok(NULL, ",");
            array[i].age = strtol(word, NULL, 10);

            if (strtol(word, NULL, 10) > 2016) {
                array[i].age = NEW;
            } else if (strtol(word, NULL, 10) == 2016) {
                array[i].age = MEDIUM;
            } else if (strtol(word, NULL, 10) < 2016) {
                array[i].age = OLD;
            }

           word = strtok(NULL, " ");
           array[i].screen_size = strtol(word, NULL, 10);

            i++;
        }
    }

    for (int j = 0; j < 15; ++j) {

        printf("NAME: %s, AGE: %s, SIZE: %d.\n", array[j].name, get_age(array, j), array[j].screen_size);
    }

    return i;
}

char* get_age(data_t* array, int index)
{
    if(array[index].age == OLD){
        return "old";
    }else if(array[index].age == MEDIUM){
        return "medium";
    }else if(array[index].age == NEW){
        return "new";
    }
}



