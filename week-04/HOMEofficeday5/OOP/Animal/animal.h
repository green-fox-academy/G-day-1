#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H
#include <iostream>


class Animal {

public:


    Animal();
    void eat();
    void drink();
    void play();

    int getHunger() const;
    int getThirst() const;

private:
    int _hunger;
    int _thirst;
};


#endif