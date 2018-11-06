#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    std::cout << "Hi, gimme 5 numbers." << std::endl;
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;
    std::cin >> num4;
    std::cin >> num5;

    int numbers[5] = {num1, num2, num3, num4, num5};
    int *numbersPtr = numbers;


    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        std::cout << numbers + i << std::endl;
    }









    return 0;
}