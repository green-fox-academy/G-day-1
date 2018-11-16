#include <iostream>
#include <string>
int doubling(int x);

int main(int argc, char* args[]) {

    int baseNum = 123;
    doubling(baseNum);

    std::cout << doubling(baseNum) << std::endl;

    return 0;
}

int doubling(int x) {
    int result = x * 2;

    return result;
}