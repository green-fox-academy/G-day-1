#include "car.h"

Car::Car(int gasAmount, int capacity) : _gasAmount(gasAmount), _capacity(capacity) {

}

bool Car::isFull() {
    if (_capacity == _gasAmount) {
        return true;
    }
    else{
        return false;
    }
}

void Car::fill() {
    _gasAmount++;
}
