#include "electricguitar.h"

ElectricGuitar::ElectricGuitar() {
    _name = "Electric Guitar";
    _numberOfStrings = 6;

}

ElectricGuitar::ElectricGuitar(int numberofStrings) {
    _name = "Electric Guitar";
    _numberOfStrings = numberofStrings;

}

std::string ElectricGuitar::sound() {
    return "Twang";
}

void ElectricGuitar::play() {
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;

}
