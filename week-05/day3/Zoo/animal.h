#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H
#include <iostream>

class Animal {
public:
    std::string getName();
    virtual std::string breed() = 0;

    Animal(const std::string &name);


protected:
    std::string _name;
    int _age;

};

#endif

