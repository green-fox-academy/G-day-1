#include <iostream>

int main(int argc, char* args[]) {

    std::string line1 = "% % % %";
    std::string line2 = " % % % %";


    for (int i = 0; i < 6; ++i) {
        std::cout << line1 << std::endl;
        std::cout << line2 << std::endl;


    }
    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %

    return 0;
}