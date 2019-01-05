#include <string.h>
#include <stdio.h>
#include "person_id.h"

/*
 * * Implement the following functions:

 * -
 * For both functions you have to add the needed parameters!
 * You don't need to implement a function, which initializes the persons, just do it manually from main().
  * E.g. initialize your persons in main() with 4 elements in order to be able to test your
  * 2 implemented functions if it works correctly.
 */

int main() {

    person_t people[4] = {{.name = "Person1", .year_of_birth = 1956, .type = BSC_DEGREE},
                          {.name = "Person2", .year_of_birth = 1987, .type = HIGH_SCHOOL},
                          {.name = "Person3", .year_of_birth = 1993, .type = ELEMENTARY_SCHOOL},
                          {.name = "Person4", .year_of_birth = 1910, .type = HIGH_SCHOOL}

    };

    int length = sizeof(people)/ sizeof(people[0]);

    printf("The age of the oldest person is: %d.\n", get_oldest_alive(people, length));
    printf("Number of people with 'High-School' qualification is: %d\n", get_qualification_count(people, length));
    printf("Number of people with 'High-School' qualification is: %d", get_qualification_count2(people, length, HIGH_SCHOOL));

    return 0;
}