#include <iostream>
#include "station.h"
#include "car.h"


int main() {

    Station shell(100);

    Car audi(20, 50);
    std::cout << "gas in the station: " << shell.getGasAmount() << std::endl;
    std::cout << "gas in the auto: " << audi.getGasAmountCar() << std::endl;
    shell.fill(audi);

    std::cout << "gas in the station: " <<shell.getGasAmount() << std::endl;
    std::cout << "gas in the auto: " << audi.getGasAmountCar() << std::endl;

    return 0;
}