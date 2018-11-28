#include "tree.h"




void Tree::watering(float water) {
    _waterAmount += water * 0.4;
}

bool Tree::needsWater() {
    return _waterAmount < 10;  // RETURN TRUE IF WATERAMOUNT < 10;
}

std::string Tree::getType() {
    return "tree";
}

Tree::Tree(const std::string &name, const std::string &color, float waterAmount) : Plant(name, color, waterAmount) {}
