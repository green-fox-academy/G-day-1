#include <iostream>

int main() {


    int a = 14;
    int b = 42;
    int c = 23;
    int d = 66;
    int e = 87;

    std::cout << "Sum: " << a + b + c + d + e << std::endl;
    std::cout << "Average: " << double(a + b + c + d + e) / 5 << std::endl;

    return 0;
}