#include <iostream>


int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    int a;
    try {
        std::cout << "Give me a num, pls! :)" << std::endl;
        std::cin >> a;
        if (a == 0) {
            throw 0;
        }
        std::cout << a / 10 << std::endl;
    }   catch (...) {
        std::cout << "Fail!" << std::endl;
    }


    return 0;
}