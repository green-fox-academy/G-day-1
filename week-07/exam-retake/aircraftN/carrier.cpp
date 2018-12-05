#include "carrier.h"
#include <vector>
#include <iostream>
#include "aircraft.h"

void Carrier::addAircraft(Aircraft *aircraft) {
    _aircraft.push_back(aircraft);

}

Carrier::Carrier(int ammo, int health, int initialAmmo) : _ammo(ammo), _health(health), _initialAmmo(initialAmmo) {
    _initialAmmo = 1000;
    _health = 1000;
    _ammo = 0;
}

void Carrier::fill() {
    for (int i = 0; i < _aircraft.size(); ++i) {
        if(Type::F16) {

        }
        if(_aircraft[i]->getBaseAmmo() !=)

    }
}
