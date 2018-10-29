#include <iostream>


std::string appendAFunc(std::string x);

int main() {

    std::string typo = "Chincill";
    appendAFunc(typo);



    return 0;
}

std::string appendAFunc(std::string x) {
    std::cout << x << "a" << std::endl;



}