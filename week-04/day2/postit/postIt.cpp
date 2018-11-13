#include "postIt.h"

postIt::postIt(std::string BackgroundColor, std::string text, std::string TextColor) {
    _BackgroundColor = BackgroundColor;
    _text = text;
    _TextColor = TextColor;
}



    std::string postIt::getBackgroundColor() {
        return _BackgroundColor;
    }

    std::string postIt::gettext() {
        return _text;
    }

    std::string postIt::getTextColor() {
        return _TextColor;
    }
