#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
int counter(int);

int main() {


    int x = 276;


    std::cout << counter(x) << std::endl;


    return 0;
}

int counter(int num) {
    if (num <= 0) { //base case
        return num;
    } else {
        return (num % 10) + counter(num / 10);
    }
}
