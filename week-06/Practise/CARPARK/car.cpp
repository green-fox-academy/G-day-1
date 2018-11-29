#include "car.h"

Car::Car(int id, const std::string &licencePlate, int manufactureYear, bool hasParkingTicket) : _id(id), _licencePlate(
        licencePlate), _manufactureYear(manufactureYear), _hasParkingTicket(hasParkingTicket) {}


void Car::setHasParkingTicket(bool hasParkingTicket) {
    _hasParkingTicket = hasParkingTicket;
}

int Car::getManufactureYear() const {
    return _manufactureYear;
}

const std::string &Car::getLicencePlate() const {
    return _licencePlate;
}

bool Car::isHasParkingTicket() const {
    return _hasParkingTicket;
}

int Car::getId() const {
    return 0;
}
