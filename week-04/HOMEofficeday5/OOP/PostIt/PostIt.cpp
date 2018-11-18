#include "PostIt.h"

PostIt::PostIt(const std::string &backgroundColor, const std::string &text, const std::string &textColor)
        : _backgroundColor(backgroundColor), _text(text), _textColor(textColor) {


}

const std::string &PostIt::getBackgroundColor() const {
    return _backgroundColor;
}

const std::string &PostIt::getText() const {
    return _text;
}

const std::string &PostIt::getTextColor() const {
    return _textColor;
}
