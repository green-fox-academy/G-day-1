#ifndef CARPARK_CAR_H
#define CARPARK_CAR_H
#include <iostream>

class Car {
public:
    Car(int id, const std::string &licencePlate, int manufactureYear, bool hasParkingTicket);
    int getId() const;

    void setHasParkingTicket(bool hasParkingTicket);

    int getManufactureYear() const;

    const std::string &getLicencePlate() const;

    bool isHasParkingTicket() const;

private:
    int _id;
    std::string _licencePlate;
    int _manufactureYear;
    bool _hasParkingTicket;

};


#endif

