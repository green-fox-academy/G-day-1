#include <iostream>

int main(int argc, char* args[]) {
    int a;
    int b;
    int c;
    int d;

    std::cout << "Give me 4 numbers, please!" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    std::cout << "Sum: " << a + b + c + d << std::endl;
    std::cout << "Average: " << float(a + b + c + d) / 4 << std::endl;

    return 0;
}