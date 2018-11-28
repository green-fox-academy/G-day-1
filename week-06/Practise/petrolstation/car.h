#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H
#include <iostream>

class Car {
public:
    bool isFull();
    void fill();
    Car(int gasAmount, int capacity);

private:
    int _capacity;
    int _gasAmount;
};


#endif //PETROLSTATION_CAR_H
