#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int nums;
    int num1;
    int num2;
    int num3;
    int num4;

    std::cout << "Hi, tell me how many numbers would you like to store in your array, please! (1-4)" << std::endl;
    std::cin >> nums;
    std::cout << "Now, the values of the array." << std::endl;
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;
    std::cin >> num4;

    int Array[nums] = {num1, num2, num3, num4};

    int max = 0;


    for (int x = 0; x < nums; x++)
    {
        if (Array[x] > max){

            max = Array[x];
        }



    }
    std::cout << max << std::endl;


    int *Pointr = &max;
    std::cout << Pointr << std::endl;



    return 0;
}