#include <iostream>

int main ()
{
    int age = 31;
    int *agePointer = &age;

    std::cout << *agePointer << std::endl;

    return 0;
}