#include <stdio.h>
#include <string.h>

enum car_type {
    VOLVO,
    TOYOTA,
    LAND_ROVER,
    TESLA};
typedef struct car {
    enum car_type type;
    double km;
    double gas;
}car_t;


const char* get_type_name(enum car_type car_type_type);
void print_out_data(car_t x);



int main()
{
    car_t volvo;
    volvo.type = VOLVO;
    volvo.km = 280;
    volvo.gas = 100;

    car_t toyota;
    toyota.type = TOYOTA;
    toyota.km = 300;
    toyota.gas = 110;

    car_t tesla;
    tesla.type = TESLA;
    tesla.km = 120;

    print_out_data(volvo);
    print_out_data(toyota);
    print_out_data(tesla);

    return 0;
}

void print_out_data(car_t x)
{
    if(x.type == TESLA) {
        printf("The type of the car is %s, has %0.2lf km.\n", get_type_name(x.type), x.km);
    }else{
        printf("The type of the car is %s, has %0.2lf km, gets %0.2lf gas.\n", get_type_name(x.type), x.km, x.gas);
    }
}

const char* get_type_name(enum car_type car_type_type) {
    switch (car_type_type) {
        case VOLVO:
            return "Volvo";
        case TOYOTA:
            return "Toyota";
        case TESLA:
            return "Tesla";
    }
}
