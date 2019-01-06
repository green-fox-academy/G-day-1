#include <stdio.h>
#include "smartphones.h"
#include <string.h>
#include <stdlib.h>

int main()
{

    char* path = "../phones.txt";
    smartphone_t phones[256];

    int length = read_from_file(path, phones);

    printf("----------------------------\n");
    printf("The name of the oldest phone is: %s.\n", get_oldest_phone(phones, length));
    printf("----------------------------\n");
    printf("The number of BIG size phones is: %d.\n", get_screen_size_count(phones, length, BIG));
    printf("----------------------------\n");
    printf("The number of SMALL size phones is: %d.\n", get_screen_size_count(phones, length, SMALL));
    printf("----------------------------\n");

    price_calculator(phones, length);

    return 0;
}