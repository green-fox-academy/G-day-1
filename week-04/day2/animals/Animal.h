#ifndef ANIMALS_ANIMAL_H
#define ANIMALS_ANIMAL_H
#include <iostream>

class Animal {
public:

    Animal();

    int gethunger();
    int getthirst();

    void eat();
    void drink();
    void play();

private:
    int _hunger;
    int _thirst;



};


#endif //ANIMALS_ANIMAL_H
