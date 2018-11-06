#include <iostream>

int main(int argc, char* args[]) {

    int first;
    int second;

    std::cout << "Could you gimme 2 nums?" << std::endl;
    std::cin >> first;
    std::cin >> second;

    if( second <= first){
        std::cout << "The second number should be bigger!" << std::endl;

    }else {
        for(int i = first; i < second; i++)



        std::cout << i << std::endl;
    }

   // If it is bigger it should count from the first number to the second by one
    // example:
    // 3
    // 4
    // 5

    return 0;
}