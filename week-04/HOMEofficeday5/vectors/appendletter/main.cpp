#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> appendA(std::vector<std::string> animals);

int main(int argc, char* args[])
{
    std::vector<std::string> animals = {"bo", "anacond", "koal", "pand", "zebr"};

    for(const auto& animal : appendA(animals))
    {
        std::cout << animal << " ";
    }
    return 0;
}
std::vector<std::string> appendA(std::vector<std::string> animals) {
    std::vector<std::string> animal = animals;

    for (int i = 0; i < animal.size(); i++) {
        std::cout << animal[i] + "a" << std::endl;
    }

    return animal;
}