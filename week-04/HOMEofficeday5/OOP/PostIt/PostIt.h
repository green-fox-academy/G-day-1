#ifndef POSTIT_POSTIT_H
#define POSTIT_POSTIT_H
#include <iostream>


class PostIt {


private:

public:
    PostIt(const std::string &backgroundColor, const std::string &text, const std::string &textColor);

    const std::string &getBackgroundColor() const;

    const std::string &getText() const;

    const std::string &getTextColor() const;

private:
    std::string _backgroundColor;
    std::string _text;
    std::string _textColor;


};


#endif
