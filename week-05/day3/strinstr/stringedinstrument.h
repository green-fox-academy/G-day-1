#ifndef STRINSTR_STRINGEDINSTRUMENT_H
#define STRINSTR_STRINGEDINSTRUMENT_H
#include "instrument.h"

class StringedInstrument : public Instrument {

public:
    virtual std::string sound() = 0;

protected:
    int _numberOfStrings;

};


#endif
