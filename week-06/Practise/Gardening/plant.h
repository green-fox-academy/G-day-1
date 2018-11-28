#ifndef GARDENING_PLANT_H
#define GARDENING_PLANT_H
#include <iostream>

class Plant {
public:
    virtual void watering(float water) = 0;
    virtual bool needsWater() = 0;
    virtual std::string getType() = 0; // ============ 0, hogy ne kelljen definialni. !!!!!!!!!!!!!!!!!!!!!!!!

    const std::string &getColor() const;
    float getWaterAmount() const;
    const std::string &getName() const;

    Plant(const std::string &name, const std::string &color, float waterAmount);


protected:
    std::string _name;
    std::string _color;
    float _waterAmount;



};


#endif
