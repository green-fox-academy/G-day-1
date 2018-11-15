#include <iostream>

void counter (int);
int main() {

    int n;
    std::cout << "Gimme a number, please. x)" << std::endl;
    std::cin >> n;

    counter(n);

    return 0;
}

void counter (int count) {
    if (count >= 1) {
        std::cout << "Number: " << count << std::endl;
        counter(count - 1);
    }
}