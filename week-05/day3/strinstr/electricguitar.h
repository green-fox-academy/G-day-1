#ifndef STRINSTR_ELECTRICGUITAR_H
#define STRINSTR_ELECTRICGUITAR_H
#include <iostream>
#include "stringedinstrument.h"
#include "instrument.h"

class ElectricGuitar : public StringedInstrument  {
public:

    ElectricGuitar();
    ElectricGuitar(int numberofStrings);

    std::string sound() override;
    void play() override;

};

#endif
