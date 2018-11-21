#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H
#include <iostream>
#include "animal.h"

class Reptile : public Animal {
public:

    Reptile(const std::string &name);

    std::string breed() override;
};


#endif
