#include "Sharpie.h"

Sharpie::Sharpie(const std::string &color, float width) : _color(color), _width(width) {
    _inkAmount = 100;

}

const std::string &Sharpie::getColor() const {
    return _color;
}

float Sharpie::getWidth() const {
    return _width;
}

void Sharpie::use() {
    _inkAmount = _inkAmount - 3;

}

float Sharpie::getInkAmount() const {
    return _inkAmount;
}
