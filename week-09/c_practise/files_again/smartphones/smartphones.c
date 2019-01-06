#include "smartphones.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int read_from_file(char* path, smartphone_t* array)
{
    FILE* file_pointer = fopen(path, "r");
    int i = 0;
    char line[256];
    int counter = 0;

    if(file_pointer == NULL){
        printf("Cannot find file.");
        return -1;
    }else {
        while (fgets(line, sizeof line, file_pointer) != NULL) {
            char* word = strtok(line, " ");
            while(word != 0){
                counter++;
                if(counter == 1){
                    strcpy(array[i].name, word);
                }else if(counter == 2){
                    array[i].year = strtol(word, NULL, 10);
                }else if(counter == 3){
                    if(strtol(word, NULL, 10) >= 15){
                        array[i].type = BIG;
                    }else if(strtol(word, NULL, 10) >= 12){
                        array[i].type = MEDIUM;
                    }else if(strtol(word, NULL, 10) < 12){
                        array[i].type = SMALL;
                    }}
                word = strtok(NULL, " ");
            }
            i++;
            counter = 0;
        }
    }
    for (int j = 0; j < 15; ++j) {
        printf("Type: %s \t\t Year: %d\t\t size: %s\n", array[j].name, array[j].year, get_screen_size(array, j));
    }
    fclose(file_pointer);
    return i;
}

char* get_screen_size(smartphone_t* array, int index)
{
    if(array[index].type == SMALL){
        return "small";
    }else if(array[index].type == MEDIUM){
        return "medium";
    }else if(array[index].type == BIG){
        return "big";
    }
}

char* get_oldest_phone(smartphone_t array[], int length)
{
    int oldest = 0;
    int index = 0;

    for (int i = 0; i < length; ++i) {
        int age = 2019 - array[i].year;

        if(age > oldest){
            oldest = age;
            index = i;
            }}
    return array[index].name;
}

int get_screen_size_count(smartphone_t array[], int length, enum screen_size screensize)
{

    int counter = 0;

    for (int i = 0; i < length; ++i) {
        if(array[i].type == screensize){
            counter++;
        }
    }
    return counter;
}
