#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H
#include "animal.h"

class Mammal : public Animal {

public:
    Mammal(const std::string &name);

    std::string breed() override;
};


#endif
