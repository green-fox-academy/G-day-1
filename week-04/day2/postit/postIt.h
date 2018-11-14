#ifndef POSTIT_POSTIT_H
#define POSTIT_POSTIT_H
#include <iostream>

class postIt{
public:

    postIt(std::string BackgroundColor, std::string text, std::string TextColor);

    std::string getBackgroundColor();
    std::string gettext();
    std::string getTextColor();


private:
    std::string _BackgroundColor;
    std::string _text;
    std::string _TextColor;

};


#endif //POSTIT_POSTIT_H
