#ifndef STRINSTR_INSTRUMENT_H
#define STRINSTR_INSTRUMENT_H
#include <iostream>

class Instrument {
public:
    virtual void play() const = 0;


protected:
    std::string _name;
};

#endif
