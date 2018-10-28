#include <iostream>

int main() {


    int number = 0;
    std::cout << "Enter an integer:";
    std::cin >> number;

    if(number % 2){
        std::cout << "ODD" << std::endl;

    }else {
        std::cout << "EVEN" << std::endl;


    }



    return 0;
}