#ifndef MEDIAN_MEDIAN_H
#define MEDIAN_MEDIAN_H

typedef struct height{
    char name[10];
    int height[100];
    int size;

}height_t;

int read_from_file(char* path, height_t array[]);

#endif //MEDIAN_MEDIAN_H
