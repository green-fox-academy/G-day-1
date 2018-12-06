#ifndef CARFILE_CAR_H
#define CARFILE_CAR_H
#include <iostream>
#include <vector>

class Car {
public:
    Car(int maxSpeed, const std::string &color, int weight);
    int getMaxSpeed() const;
    const std::string &getColor() const;
    int getWeight() const;

protected:
    int _maxSpeed;
    std::string color;
    int _weight;
};


#endif
