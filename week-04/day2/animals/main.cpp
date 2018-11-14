#include <iostream>
#include "Animal.h"


int main() {

    Animal cat;
    Animal dog;

    std::cout << cat.getthirst() << "\n" << cat.gethunger() << std::endl;
    std::cout << dog.getthirst() << "\n" << dog.gethunger() << std::endl;



    return 0;
}