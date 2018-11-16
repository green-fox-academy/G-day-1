#include <iostream>

int sum(int number);

int main(int argc, char* args[]) {
    int baseNum = 15;
    std::cout << sum(baseNum) << std::endl;

    return 0;
}
int sum(int number) {
    int sum = 0;
    for (int i = 0; i < number; i++)
        sum += i;
    return sum;
}
