#ifndef STRINSTR_VIOLIN_H
#define STRINSTR_VIOLIN_H
#include <iostream>
#include "stringedinstrument.h"

class Violin : public StringedInstrument{
    Violin();
    Violin(int numberofStrings);

    std::string sound() override;
    void play() override;

};


#endif
