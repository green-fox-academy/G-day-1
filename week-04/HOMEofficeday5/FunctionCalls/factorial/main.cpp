#include <iostream>
#include <string>

int factorio(int number);

int main(int argc, char* args[]) {

    int input = 5;
    std::cout << factorio(input) << std::endl;
    return 0;
}
int factorio(int number) {
       int anything = 1;
        for(int i = 1; i <= number; i++)
            anything *= i;
        return anything;
}
