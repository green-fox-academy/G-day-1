#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was

    int a;
    std::cin >> a;
    int b = a;
    for (b; b > 0; b--){
        std::cout << "%";
    }
    std::cout << std::endl;

    b = a - 2;
    int c = b;
    for (c; c > 0; c--){
        std::cout << "%";
        for ( b; b > 0; b--){
            std::cout << " ";
            if (b == 1) {
                std::cout << "%";
            }

        }
        b = a - 2;
        std::cout << std::endl;
    }

    b = a;
    for (b; b > 0; b--){
        std::cout << "%";
    }
    std::cout << std::endl;

    return 0;
}
