#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "car.h"

int greenCars(std::vector<Car> a);
int weightOfTheFastestCar(std::vector<Car> b);
bool carsOver1000(std::vector<Car> c);

int main() {

    std::ifstream file;
    file.open("../carfile.txt");

    if (!file.is_open()) {
        std::cout << "could not open file" << std::endl;
        return 2;
    }

    std::vector<Car> cars;
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream stream(line);

        std::string speedString;
        std::getline(stream, speedString, ';');
        int speed = std::stoi(speedString, nullptr, 10);

        std::string color;
        std::getline(stream, color, ';');

        std::string heightString;
        std::getline(stream, heightString, ';');
        int height = std::stoi(heightString, nullptr, 10);

        Car car(speed, color, height);
        cars.push_back(car);
    }

    file.close();

    greenCars(cars);
    weightOfTheFastestCar(cars);

    if(carsOver1000(cars)) {
        std::cout << "Yess" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
        return 0;
}

int greenCars(std::vector<Car> a)
{
    int numberOfGreenCars = 0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i].getColor() == "Green") {
            numberOfGreenCars++;
        }
    }std::cout << "The number of GREEN cars is: " << numberOfGreenCars << std::endl;
}

int weightOfTheFastestCar(std::vector<Car> b) {
    int fastest = b[0].getMaxSpeed();
    int x = 0;
    for (int i = 0; i < b.size(); ++i) {
        if(b[i].getMaxSpeed() > fastest) {
            fastest = b[i].getMaxSpeed();
            x = i;
        }
    }std::cout << "The weight of the fastest car is: " << b[x].getWeight() << " kg." << std::endl;
}

bool carsOver1000(std::vector<Car> c) {
    int x = 0;
    for (int i = 0; i < c.size(); i++) {
        if(c[i].getWeight() > 1000) {
            return true;}
        }return false;
}

