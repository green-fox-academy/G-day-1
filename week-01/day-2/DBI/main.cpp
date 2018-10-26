#include <iostream>

int main() {
    std::string name = "Gergo";
    int age = 25;
    double height = 175;
    bool Married = false;


    std::cout << name << std::endl;
    std::cout << age << "years old" << std::endl;
    std::cout << height << "cm" << std::endl;


    std::cout << std::boolalpha << Married << std::endl;


    return 0;
}