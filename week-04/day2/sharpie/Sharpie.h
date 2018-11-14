#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H
#include <iostream>

class Sharpie {

public:
    Sharpie();

    Sharpie(const std::string &color, float width, float inkAmount);

    std::string getcolor();
    float getwidht();
    float getinkAmount();

    void use();


private:

    std::string _color;
    float _width;
    float _inkAmount;









};


#endif //SHARPIE_SHARPIE_H
