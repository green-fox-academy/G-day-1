#include <iostream>

int main(int argc, char* args[]) {
    int a;
    std::string firstline = "%%%%%%";
    std::string secondline = "%    %";

    std::cout << "Gimme a number, pls." << std::endl;
    std::cin >> a;

    std::cout << firstline << std::endl;
    for (int i = 0; i < a - 2; ++i) {
        std::cout << secondline << std::endl;
    }
    std::cout << firstline << std::endl;
    return 0;
}