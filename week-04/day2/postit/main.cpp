#include <iostream>
#include "postIt.h"

int main() {
    postIt baba("orange", "Idea1", "blue");

    std::cout << baba.getBackgroundColor() << " " << baba.gettext() << " " << baba.getTextColor() << std::endl;

    postIt baba1("pink", "Awesome", "black");

    std::cout << baba1.getBackgroundColor() << " " << baba1.gettext() << " " << baba1.getTextColor() << std::endl;

    postIt baba2("yellow", "Superb", "green");

    std::cout << baba2.getBackgroundColor() << " " << baba2.gettext() << " " << baba2.getTextColor() << std::endl;
    return 0;
}

