#include "car.h"

Car::Car(int maxSpeed, const std::string &color, int weight) : _maxSpeed(maxSpeed), color(color), _weight(weight) {
}

int Car::getMaxSpeed() const {
    return _maxSpeed;
}

const std::string &Car::getColor() const {
    return color;
}

int Car::getWeight() const {
    return _weight;
}
