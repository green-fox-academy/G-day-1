#include "flower.h"



void Flower::watering(float water) {
    _waterAmount += water * 0.75;
}

bool Flower::needsWater() {
    return _waterAmount < 5;
}

std::string Flower::getType() {
    return "virag";
}

Flower::Flower(const std::string &name, const std::string &color, float waterAmount) : Plant(name, color,
                                                                                             waterAmount) {

}
