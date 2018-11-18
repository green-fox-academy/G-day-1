#include <iostream>
#include "Sharpie.h"

int main() {

    Sharpie black("black", 12.2);

    std::cout << black.getColor() << ", " << black.getWidth() << ", " << black.getInkAmount();
    black.use(); black.use(); black.use(); black.use(); black.use(); black.use();
    std::cout << black.getColor() << ", " << black.getWidth() << ", " << black.getInkAmount();

    return 0;
}