#include <iostream>

int main(int argc, char* args[]) {

    int a;
    std::string star = "";


    std::cout << "Hello, my friend! Please, give me a number between 1 and 50! :)" << std::endl;
    std::cin >> a;

    for (int i = 0; i <= a; ++i) {
        std::cout << star << std::endl;
        star += "*";
    }

    return 0;
}