#include <iostream>
#include "aircraft.h"


int main() {


    Aircraft anyad(20, 40);

    std::cout << anyad.fight() << std::endl;

    std::cout << anyad.getBaseAmmo() << std::endl;


    Aircraft istenem(12, 40);
    istenem.fight();
    std::cout << istenem.getStatus() << std::endl;





    return 0;
}