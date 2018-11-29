#ifndef CARPARK_CARPARK_H
#define CARPARK_CARPARK_H
#include "car.h"
#include <iostream>
#include <vector>
#include <map>

class Carpark {

public:
    void addCar(Car car);
    void modifyTicket(int id, bool validity);
    void removeCar(int id);
    std::string getOldest();
    std::vector<Car> getPenalties();
    std::map<int, int> getPenaltiesByYear();

private:
    std::vector<Car> _kocsik;
public:
    const std::vector<Car> &getKocsik() const;

};


#endif


