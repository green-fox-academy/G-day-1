#include <stdio.h>
#include "smartphones.h"
#include <string.h>
#include <stdlib.h>

/* * Additionally, you need to create a new file(prices.txt) that looks like this:
 * <NAME> <PRICE>
 * <NAME> <PRICE>
 * .
 * .
 * .
 *
 * To calculate the price use the following method. The base price of every phone is 300$.
 * If the size is SMALL, that adds 0$ to the value
 * If the size is MEDIUM, that adds 100$ to the value
 * If the size is BIG, that doubles the base price.
 *
 * The price also depends on the age. For every year that passed since its release,
 * the phone loses 50$ but the maximum value that it can lose because of the age is 250$
 */
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


    return 0;
}