#include <iostream>

int main() {
    // Create a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %

    std::string minta1 = "% % % % ";
    std::string minta2 = " % % % %";
    for (int i = 1; i < 4; ++i) {
        std::cout << minta1 << std::endl;
        std::cout << minta2 << std::endl;
    }
    return 0;
}