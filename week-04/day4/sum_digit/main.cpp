#include <iostream>

int main(int argc, char const *argv[]){
    int b = 100;
    b -= 7;

    std::cout << b << std::endl;


    int f1 = 423;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)

    bool trueornot;

    if(f1 < f2) {
        trueornot = false;
        std::cout << std::boolalpha << false << std::endl;

    } else {
        std::cout << std::boolalpha << true << std::endl;
            }


}