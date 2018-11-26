#include "violin.h"

Violin::Violin() {
_name = "Violin";
_numberOfStrings = 4;
}

Violin::Violin(int numberofStrings) {
_name = "Violin";
_numberOfStrings = numberofStrings;
}

std::string Violin::sound() {
    return "Screech";
}

void Violin::play() {
    std::cout << _name << ", a " << _numberOfStrings << "-stringed instrument that goes " << sound() << std::endl;
}
