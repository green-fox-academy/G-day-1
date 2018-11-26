#ifndef STRINSTR_BASSGUITAR_H
#define STRINSTR_BASSGUITAR_H
#include <iostream>
#include "stringedinstrument.h"

class BassGuitar : public StringedInstrument{

    BassGuitar();
    BassGuitar(int numberofStrings);

    std::string sound() override;
    void play() override;
};


#endif