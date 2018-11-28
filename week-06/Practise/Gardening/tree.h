#ifndef GARDENING_TREE_H
#define GARDENING_TREE_H
#include "plant.h"

class Tree : public Plant {
public:


    Tree(const std::string &name, const std::string &color, float waterAmount);

    void watering(float water) override;
    bool needsWater() override;
    std::string getType() override;

};


#endif
