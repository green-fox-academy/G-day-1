#include <iostream>
#include "fleet.h"
#include "thing.h"

int main(int argc, char* args[])
{
    Fleet fleet;

    Thing thing1 ("Get milk");
    fleet.add(thing1);

    Thing thing2 ("Eat lunch");
    thing2.complete();
    fleet.add(thing2);

    std::cout << fleet.toString() << std::endl;
    return 0;
}
