#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H
#include <iostream>
#include "car.h"

class Station {
public:
    Station(int gasAmount);
    void fill(Car& car);



private:
    int _gasAmount;


};


#endif //PETROLSTATION_STATION_H
