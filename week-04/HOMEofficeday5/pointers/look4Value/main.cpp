#include <iostream>

int function(int *Array, int length, int *num);

int main()
{    int a;

    std::cout << "Hi, could you give me a number, that I can practise with?" << std::endl;
    std::cin >> a;
    std::cout << "Thanks." << std::endl;

    int numbers[] = {4, 5, 6, 7, 8};
    int b = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << function(numbers, b, &a) << std::endl;

    return 0;
}

int function(int *Array, int length, int *num) {
    for(int i = 0; i < length; i++) {
        if(Array[i] == *num) {return i; }
    }

    return 0;

}