#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int generatedNumber = 0;
    srand(unsigned(time(0)));
    generatedNumber = rand()%100;

    int usersNumber1;

    std::cout << "Hi, guess my number! ;) /Help: it's between 0-100./" <<std::endl;

    int lives = 5;

    while(lives > 0) {
        std::cin >> usersNumber1;
        if(generatedNumber > usersNumber1) {
            std::cout << "Too low, you have" << lives - 1 <<  " lives left." << std::endl;
        }else if(generatedNumber == usersNumber1) {
            std::cout << "CONGRATS! YOU WON!" << std::endl;
            return 0;
        }else if(generatedNumber < usersNumber1) {
            std::cout << "Too high, you have " << lives - 1 << " lives left." <<std::endl;
        }
        lives--;
    }
    std::cout << "You died. :(" << std::endl;
    std::cout << "The generated number was: " << generatedNumber;

    return 0;
}