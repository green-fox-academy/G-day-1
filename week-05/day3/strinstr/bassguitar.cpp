#include "bassguitar.h"

BassGuitar::BassGuitar() {
_name = "Bass Guitar";
_numberOfStrings = 4;
}

BassGuitar::BassGuitar(int numberofStrings) {
_name = "Bass Guitar";
_numberOfStrings = numberofStrings;

}

std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}

void BassGuitar::play() {
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}
