#ifndef SHARPIE2_SHARPIE2_H
#define SHARPIE2_SHARPIE2_H
#include <iostream>

class Sharpie2 {
public:
    Sharpie2(const std::string &color, float width, float inkAmount);

private:
    std::string _color;
    float _width;
    float _inkAmount;

};


#endif
