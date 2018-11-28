#ifndef GARDENING_FLOWER_H
#define GARDENING_FLOWER_H
#include "plant.h"
#include <iostream>

class Flower : public Plant{

public:


    Flower(const std::string &name, const std::string &color, float waterAmount);

    void watering(float water) override;
    bool needsWater() override;
    std::string getType() override;

};


#endif
