#ifndef AIRCRAFT_CARRIER_H
#define AIRCRAFT_CARRIER_H
#include "aircraft.h"
#include <vector>
#include <iostream>


class Carrier {
    public:
        Carrier(int ammo, int health, int initialAmmo);
        void addAircraft(Aircraft* aircraft);
        void fill();


    protected:
        std::vector<Aircraft*> _aircraft;
        int _ammo;
        int _health;
        int _initialAmmo;




};


#endif
