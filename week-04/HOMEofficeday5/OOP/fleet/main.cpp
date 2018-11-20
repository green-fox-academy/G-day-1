#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;

    Thing getMilk("Get milk");
    Thing remove("Remove the obstacles");
    Thing standUp("Stand up");
    Thing eatLunch("Eat lunch");
    standUp.complete();
    eatLunch.complete();

    fleet.add(getMilk);
    fleet.add(remove);
    fleet.add(standUp);
    fleet.add(eatLunch);

    std::cout << fleet.toString() << std::endl;
    return 0;
}
