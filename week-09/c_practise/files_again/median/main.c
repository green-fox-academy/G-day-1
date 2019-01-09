#include <stdio.h>
#include "median.h"
#include <string.h>
#include <stdlib.h>

// Every line contains the name of the group and after a colon, the height of people in the group separated by commas
// Find the group where the median is the lowest.
// Note that the groups do not necessarily contain the same amount of people

int main()
{

    height_t array[100];

    read_from_file("../my_file.txt", array);
    printf("%s\n", array[0].name);
    printf("%d\n", array[0].size);
    for (int i = 0; i < array[0].size ; ++i) {
        printf("%d, ", array[0].height[i]);
    }


    // NOT FINISHED

    return 0;
}
