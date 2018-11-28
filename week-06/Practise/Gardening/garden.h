#ifndef GARDENING_GARDEN_H
#define GARDENING_GARDEN_H
#include "plant.h"
#include <vector>

class Garden {
protected:
    std::vector<Plant*> _plants;   // <Plant*> ===== alatta lévő class neve!!!!!   csillag MINDIG!!!!!!
    int _needsWatering = 0;

public:
    void addPlant(Plant* plant);
    void distributeWater(float waterAmount);
    void printGarden();

};


#endif
