#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "carpark.h"

Carpark readFromFile(std::string fileName);
void writeToFile(std::string fileName, Carpark carpark);

int main() {


    return 0;
}

Carpark readFromFile(std::string fileName)
{
    std::ifstream file(fileName);
    if(file.is_open()){
        std::cout << "Open" << std::endl;
    }else{
        std::cout << "Your file is closed" << std::endl;
        throw 2;
    }

    Carpark carpark;
    std::string line;
    int idCounter = 1;
    while(std::getline(file, line)){  //kiolvas egy sort és elmenti a line-ba. (while, hogy minden soron menjen végig
        std::istringstream stream(line);    //
        std::string word;

        std::string licencePlate;
        int year;
        int hasTicket;

        std::getline(stream, word, ',');
        licencePlate = word;
        std::getline(stream, word, ',');
        year = std::stoi(word, nullptr, 10);
        std::getline(stream, word, ',');
        hasTicket = std::stoi(word, nullptr, 10);

        Car car(idCounter, licencePlate, year, hasTicket == 1);   // ?????????????????????????????????????? ==1?????????????
        carpark.addCar(car);
        ++idCounter;
    }

    return carpark;
}

void writeToFile(std::string fileName, Carpark carpark)
{
    std::ofstream file;
    file.open(fileName);
    if(file.is_open()){
        std::vector<Car> cars = carpark.getKocsik();
        for (int i = 0; i < cars.size(); ++i) {
            int ticket = cars[i].isHasParkingTicket();
            file << cars[i].getLicencePlate() << "," << cars[i].getManufactureYear() << "," << ticket << std::endl;
        }
    }else{
        throw 3;
    }
}