#include <iostream>

int main(int argc, char* args[]) {

    double a = 4.5;
    double b = 6.5;
    double c = 7.2;
    double volume = a * b * c;
    double surface = 2 * (a*b + a*c + b*c);

    std::cout << "Surface area: " << surface << "\n" << "Volume: " << volume << std::endl;

    return 0;
}