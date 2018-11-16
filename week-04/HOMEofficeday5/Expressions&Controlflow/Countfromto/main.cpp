#include <iostream>

int main(int argc, char* args[]) {

    int a;
    int b;

    std::cout << "Hallo, kannst du bitte 2 Nummer geben?" << std::endl;
    std::cin >> a;
    std::cin >> b;
    
    if(a >= b) {
        std::cout << "The second number should be bigger!" << std::endl;
    }else{
        for (int i = a; i < b; ++i) {
           std::cout << i << std::endl;
        }
    }
    return 0;
}