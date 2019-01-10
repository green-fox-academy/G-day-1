#include <stdio.h>
#include <string.h>
#include "my_class.h"
#include <stdlib.h>


/*
 * The smartphones should be stored in an array.
 *
 * Implement the following functions:
 * - get_oldest_phone()
 *    - it should return the name of oldest device
 *    - it is up to you how your function declaration looks like (return type and arguments)
 * - get_screen_size_count()
 *    - it returns the count of phones which has "screen_size" size
 *    - it is up to you how your function declaration looks like (return type and arguments)
 *
 * Your main function should invoke these functions and print the following:
 * The ..... is the oldest device in the database
 * There are .... phones with BIG (>= 15 cm) screen size
 * There are .... phones with SMALL (< 12 cm) screen size
 *
 *
 * Additionally, you need to create a new file(prices.txt) that looks like this:
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

    char* path = "../telephones.txt";
    printf("%d", check_array_size(path));

    data_t* telephones =  (data_t*)malloc(sizeof(data_t) * check_array_size(path));

    read_from_file(path, telephones);



    return 0;
}
