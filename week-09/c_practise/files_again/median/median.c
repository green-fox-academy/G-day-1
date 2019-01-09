#include <stdio.h>
#include "median.h"
#include <string.h>
#include <stdlib.h>

int read_from_file(char* path, height_t array[])
{
    FILE* my_file = fopen("../my_file.txt", "r");
    int i = 0;
    int j = 0;
    char line[256];
    int counter = 0;

    if(my_file == NULL){
        printf("Cannot open file. :/");
        return -1;
    }else{
        while(fgets(line, sizeof line, my_file) != NULL){
            char* word = strtok(line, ":");
            strcpy(array[i].name, word);
            while(word != NULL){
                word = strtok(NULL, ",");
                if(strtol(word, NULL, 10) != 0){
                    array[i].height[j] = strtol(word, NULL, 10);
                }
                j++;
                counter++;

            }
            array[i].size = counter - 1;
            i++;
            j = 0;
            counter = 0;
        }
    }
    fclose(my_file);

}