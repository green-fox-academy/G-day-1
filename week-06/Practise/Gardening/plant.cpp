#include "plant.h"


const std::string &Plant::getColor() const {
    return _color;
}

float Plant::getWaterAmount() const {
    return _waterAmount;
}

const std::string &Plant::getName() const {
    return _name;
}

Plant::Plant(const std::string &name, const std::string &color, float waterAmount) : _name(name), _color(color),
                                                                                     _waterAmount(waterAmount) {}


