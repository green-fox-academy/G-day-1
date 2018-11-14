#include <iostream>
#include "Sharpie.h"

int main() {

    Sharpie numero1("White", 22.5);
    for(int i = 0; i < 8; i++) {
        numero1.use();
    }

    std::cout << numero1.getColor() << " " << numero1.getWidth() << " " << numero1.getInkAmount() << std::endl;

    Sharpie numero2("Black", 54.4);
    for(int i = 0; i < 15; i++) {
        numero2.use();
    }

    std::cout << numero2.getColor() << " " << numero2.getWidth() << " " << numero2.getInkAmount() << std::endl;



    return 0;
}