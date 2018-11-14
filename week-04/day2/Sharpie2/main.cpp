#include <iostream>
#include "Sharpie2.h"
int main() {

    Sharpie2 kiscica("Purple", 7.5);
    for(int i = 0; i < 10; i++) {
        kiscica.use();
    }

    std::cout << kiscica.getColor() << " " << kiscica.getWidth() << " " << kiscica.getInkAmount() << std::endl;

    return 0;
}