#ifndef AIRCRAFT_AIRCRAFT_H
#define AIRCRAFT_AIRCRAFT_H
#include <iostream>

enum class Type {
    F16,
    F35
};

class Aircraft {
public:
    Aircraft(int baseAmmo, int baseDamage);

    int fight();
    int refill(int number);
    void setBaseAmmo(int baseAmmo);
    int getBaseAmmo() const;
    std::string getType();
    std::string getStatus();
    bool isPriority();


protected:
        Type _type;
        int _baseAmmo;
        int _maxAmmo;
        int _baseDamage;

};


#endif
