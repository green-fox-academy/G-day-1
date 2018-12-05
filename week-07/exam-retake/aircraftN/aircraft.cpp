#include "aircraft.h"

Aircraft::Aircraft(int baseAmmo, int baseDamage) : _baseAmmo(baseAmmo), _baseDamage(baseDamage) {

}

int Aircraft::fight() {
    int damage = _baseAmmo * _baseDamage;
    setBaseAmmo(0);
    return damage;
}

int Aircraft::getBaseAmmo() const {
    return _baseAmmo;
}

void Aircraft::setBaseAmmo(int baseAmmo) {
    _baseAmmo = baseAmmo;
}

int Aircraft::refill(int number) {
   return number - _maxAmmo;
}

std::string Aircraft::getType() {
    if(_type == Type::F16) {
        return "F16";
    }else{
        return "F35";
    }
}

std::string Aircraft::getStatus() {
    return "Type: " + getType() + " Ammo: " + std::to_string(_baseAmmo)  + " Base Damage: "
    + std::to_string(_baseDamage) + " All Damage: " + std::to_string(_baseDamage * _baseAmmo);

}

bool Aircraft::isPriority() {
    if(_type == Type::F35) {
        return true;
    }else{
        return false;
    };
}
