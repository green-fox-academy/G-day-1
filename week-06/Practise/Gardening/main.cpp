#include <iostream>
#include "plant.h"
#include "tree.h"
#include "garden.h"
#include "flower.h"

int main() {

    Flower tulipan("tulipan", "black", 6);
    Flower pipacs("pipacs", "zold", 3);
    Tree akaszto("akaszto", "feher", 6);
    Tree tolgy("tolgy","lila", 1);


    Garden kiskert;
    kiskert.addPlant(&tulipan);
    kiskert.addPlant(&pipacs);
    kiskert.addPlant(&akaszto);
    kiskert.addPlant(&tolgy);


    kiskert.printGarden();
    std::cout << "- - - - - - - - - - - - -" << std::endl;
    kiskert.distributeWater(40);
    std::cout << "- - - - - - - - - - - - -" << std::endl;

    kiskert.printGarden();
    std::cout << "- - - - - - - - - - - - -" << std::endl;
    kiskert.distributeWater(70);
    std::cout << "- - - - - - - - - - - - -" << std::endl;

    kiskert.printGarden();

    return 0;
}