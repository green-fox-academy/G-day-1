#include <iostream>

int main() {
    int num;


    std::cout << "Gimme a num, plz!" << std::endl;
    std::cin >> num;

    int numenyem = 0;

    while(numenyem < 10) {
        numenyem = numenyem + 1;


        std::cout <<  numenyem << " * " << num << " = " << num * numenyem << std::endl;
    }

    return 0;
}