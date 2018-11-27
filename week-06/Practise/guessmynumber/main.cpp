#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int generatedNumber = 0;
    srand(unsigned(time(0)));
    generatedNumber = rand()%100;

    int usersNumber1;
    int usersNumber2;
    int usersNumber3;
    int usersNumber4;
    int usersNumber5;

    std::cout << "Hi, guess my number! ;) /Help: it's between 0-100./" <<std::endl;

    std::cin >> usersNumber1;

    for (int i = 0; i < 5; ++i) {
        


    }

    if(generatedNumber > usersNumber1) {
        std::cout << "Too low, you have 4 lives left." << std::endl;
    }else if(generatedNumber == usersNumber1) {
        std::cout << "CONGRATS! YOU WON!" << std::endl;
        return 0;
    }else if(generatedNumber < usersNumber1) {
        std::cout << "Too high, you have 4 lives left." <<std::endl;
    }

    std::cin >> usersNumber2;
    if(generatedNumber > usersNumber2) {
        std::cout << "Too low, you have 3 lives left." << std::endl;
    }else if(generatedNumber == usersNumber2) {
        std::cout << "CONGRATS! YOU WON!" << std::endl;
        return 0;
    }else if(generatedNumber < usersNumber2) {
        std::cout << "Too high, you have 3 lives left." <<std::endl;
    }

    std::cin >> usersNumber3;
    if(generatedNumber > usersNumber3) {
        std::cout << "Too low, you have 2 lives left." << std::endl;
    }else if(generatedNumber == usersNumber3) {
        std::cout << "CONGRATS! YOU WON!" << std::endl;
        return 0;
    }else if(generatedNumber < usersNumber3) {
        std::cout << "Too high, you have 2 lives left." << std::endl;
    }

    std::cin >> usersNumber4;
    if(generatedNumber > usersNumber4) {
        std::cout << "Too low, you have 1 life left." << std::endl;
    }else if(generatedNumber == usersNumber4) {
        std::cout << "CONGRATS! YOU WON!" << std::endl;
        return 0;
    }else if(generatedNumber < usersNumber4) {
        std::cout << "Too high, you have 1 life left." << std::endl;
    }

    std::cin >> usersNumber5;
    if(generatedNumber > usersNumber5 || generatedNumber < usersNumber5) {
        std::cout << "You died. :(" << std::endl;
    }else if(generatedNumber == usersNumber5) {
        std::cout << "CONGRATS! YOU WON!" << std::endl;
    }

    std::cout << "The generated number was: " << generatedNumber;

    return 0;
}
