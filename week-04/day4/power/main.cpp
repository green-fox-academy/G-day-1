#include <iostream>
#include <stdio.h>
#include <math.h>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
int counter(int);

int main() {

    std::cout << counter(5,2) << std::endl;


    return 0;
}

int counter(int base) {

    int n;

    if (base < 1) {
        return base;
    } else {
        return base * counter(base, n-2);
    }

}