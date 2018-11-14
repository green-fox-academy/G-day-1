#include "Sharpie2.h"

Sharpie2::Sharpie2(const std::string &color, float width) : _color(color), _width(width) {
    _inkAmount = 100;
}

void Sharpie2::use() {
    _inkAmount--;

}

const std::string &Sharpie2::getColor() const {
    return _color;
}

float Sharpie2::getWidth() const {
    return _width;
}

float Sharpie2::getInkAmount() const {
    return _inkAmount;
}

