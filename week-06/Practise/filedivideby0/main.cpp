#include <iostream>
#include <fstream>

void function(int x);
int main() {

    int a;
    std::cout << "I need a number (bigger than 10)." << std::endl;
    std::cin >> a;

    function(a);

    return 0;
}

void function(int x) {
    try {
        if (x == 0) {
            throw std::string("catchmeifyoucan");
        }
        std::cout << x / 10 << std::endl;
    }
    catch(std::string){
        std::cout << "FAIL" << std::endl;
    }
}
