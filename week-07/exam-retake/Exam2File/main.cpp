#include <iostream>
#include "weatherincities.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <map>

std::vector<WeatherInCities> readFromFile(std::string fileName);
std::map<std::string, int> cities(std::vector<WeatherInCities> a);
std::string rainiestCity(std::map<std::string, int> abcd);

int main() {

    std::vector<WeatherInCities> myVector;
    myVector = readFromFile("../cities.csv");


    std::map<std::string, int> myMap;
    myMap = cities(myVector);

    std::map<std::string, int> abcd = cities(myVector);
    std::cout << rainiestCity(abcd) << std::endl;
    return 0;
}

std::vector<WeatherInCities> readFromFile(std::string fileName)
{
    std::ifstream myFile(fileName);
    if(myFile.is_open()){
        std::cout << "Open" << std::endl;
    }else{
        std::cout << "Your file is closed" << std::endl;
        throw 2;
    }

    std::vector<WeatherInCities> myVector;
    std::string line;
    while(getline(myFile, line)) {
        std::istringstream myStream(line);

        std::string word;
        std::string date;
        std::string city;
        Weather weather;

        std::getline(myStream, date, ',');
        std::getline(myStream, city, ',');
        std::getline(myStream, word, ',');

        if(word == "RAINY") {
            weather = Weather::RAINY;
        }else if(word == "CLOUDY") {
            weather = Weather::CLOUDY;
        }else if(word == "SUNNY") {
            weather = Weather::SUNNY;
        }

        WeatherInCities ll(date, city, weather);
        myVector.push_back(ll);
    }
    return myVector;
}

std::map<std::string, int> cities(std::vector<WeatherInCities> a)
{
    std::map<std::string, int> myMap;
    for (int i = 0; i < a.size(); ++i) {
        if (myMap.find(a[i].getCity()) == myMap.end()) {
            myMap.insert(std::pair<std::string, int>(a[i].getCity(), 1));
        } else {
            myMap[a[i].getCity()]++;
        }
    }return myMap;
}

std::string rainiestCity(std::map<std::string, int> abcd)
{
int max = 0;
std::string city = "";
for(auto pair :  abcd) {
    if(pair.second >= max) {
        max = pair.second;
        city = pair.first;
        }
    }return city;
}
