#include <iostream>

int main ()
{
    float temperature = 21.3;

    float *temperaturePointer = &temperature;

    std::cout << temperaturePointer << std::endl;

    float a = 33.3;
    float b = temperature;
    temperature = a;
    a = b;

    std::cout << temperature << std::endl;

    return 0;
}