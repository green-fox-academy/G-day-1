#include <iostream>

int main(int argc, char* args[]) {

    int a;
    int b;

    std::cout << "Hi, could you give me 2 numbers?" << std::endl;
    std::cin >> a;
    std::cin >> b;

    if(a > b) {
        std::cout << a << std::endl;
    }else if(b > a){
        std::cout << b << std::endl;
    }else if(a = b) {
        std::cout << "They're equal." << std::endl;
    }
    return 0;
}