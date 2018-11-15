#include <iostream>

int counter (int);

int main() {

    int n;
    std::cout << "Gimme a number, please. x)" << std::endl;
    std::cin >> n;

    std::cout << counter(n) << std::endl;

    return 0;
}

int counter (int i) {
    if(i <= 1) {
        return 1;
    }else {
        return (i + counter(i - 1));

    }
}