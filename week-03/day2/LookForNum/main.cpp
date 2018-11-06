#include <iostream>
int nah(int *Array, int lenght, int *num);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int a;

    std::cout << "Hi, could you give me a number, that I can practise with?" << std::endl;
    std::cin >> a;
    std::cout << "Thanks." << std::endl;

    int numbers[] = {4, 5, 6, 7, 8};
    int b = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << nah(numbers, b, &a) << std::endl;

    return 0;
}

int nah(int *Array, int lenght, int *num) {
    for(int i = 0; i < lenght; i++) {
        if(Array[i] == *num) {return i; }
    }

    return 0;

}