#include <iostream>

int doubling(int x);


int main() {

    int baseNum = 123;
    baseNum = doubling(baseNum);

    std::cout << baseNum << std::endl;


    return 0;
}

int doubling(int x){

    int result = x * 2;
    return result;

}
