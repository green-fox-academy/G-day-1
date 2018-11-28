#include "station.h"
#include "car.h"


Station::Station(int gasAmount) : _gasAmount(gasAmount) {}

void Station::fill(Car &car) {
    while(!car.isFull()) {
        car.fill();
        _gasAmount--;
        std::cout << "Filling" << std::endl;
    }

}

int Station::getGasAmount() const {
    return _gasAmount;
}
