#include <string.h>
#include <stdio.h>

enum transmission {
    manual,
    automatic,
    CVT,
    semi_automatic,
    dual_clutch
}transmission_t;

typedef struct car {
    char name[256];
    float price;
    int year;
    enum transmission tr_ms;

}car_t;

int get_older_cars_than(car_t my_array[], int length, int age);
const char* get_transmission_type(enum transmission transmission_x);
int get_transmission_count(car_t my_array[], int length, enum transmission trnsm);

int main()
{
    car_t array[3] = {{.name = "Honda", .year = 2010, .tr_ms = CVT},
                      {.name = "Toyota", .year = 2000, .tr_ms = automatic},
                      {.name = "Suzuki", .year = 2005}};

    int length = sizeof(array)/ sizeof(array[0]);
    int age = 10;
    enum transmission trnsm = CVT;
    enum transmission trnsm1 = automatic;
    printf("The number of older cars than age is: %d.\n", get_older_cars_than(array, length, age));
    printf("The number of cars which has %s transmission is: %d.\n", get_transmission_type(trnsm), get_transmission_count(array, length, trnsm));
    printf("The number of cars which has %s transmission is: %d.\n", get_transmission_type(trnsm1), get_transmission_count(array, length, trnsm1));

    return 0;
}

int get_older_cars_than(car_t my_array[], int length, int age)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(2018 - my_array[i].year > age){
            counter++;
        }
    }
    return counter;
}

const char* get_transmission_type(enum transmission transmission_x) {
    switch (transmission_x) {
        case manual:
            return "manual";
        case automatic:
            return "automatic";
        case CVT:
            return "CVT";
        case semi_automatic:
            return "semi-automatic";
        case dual_clutch:
            return "dual-clutch";
    }
}

int get_transmission_count(car_t my_array[], int length, enum transmission trnsm)
{
    int counter = 0;
    for (int i = 0; i < length; ++i) {
        if(my_array[i].tr_ms == trnsm){
            counter++;
        }
    }
    return counter;
}