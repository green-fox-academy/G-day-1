#ifndef SHARPIE2_SHARPIE2_H
#define SHARPIE2_SHARPIE2_H
#include <iostream>

class Sharpie2 {
public:
    Sharpie2(const std::string &color, float width);

    void use();

    const std::string &getColor() const;

    float getWidth() const;

    float getInkAmount() const;


private:
    std::string _color;
    float _width;
    float _inkAmount;

};


#endif
