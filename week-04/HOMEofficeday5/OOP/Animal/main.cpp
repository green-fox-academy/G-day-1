#include <iostream>
#include "animal.h"

int main() {

    Animal cat;
    Animal dog;

    std::cout << "Cat default thirst: " << cat.getThirst() << "\n" << "Cat default hunger: " << cat.getHunger() << std::endl;

    cat.play(); cat.play(); cat.drink(); cat.play(); cat.drink(); cat.play(); cat.eat();

    std::cout << "Cat actual thirst: " << cat.getThirst() << "\n" << "Cat actual hunger: " << cat.getHunger() << std::endl;

    std::cout << dog.getThirst() << "\n" << dog.getHunger() << std::endl;

    return 0;
}