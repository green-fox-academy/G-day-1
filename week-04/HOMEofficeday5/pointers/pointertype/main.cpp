#include <iostream>

int main ()
{
    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPointer = &a;

    std::cout << aPointer << std::endl;
    std::cout << &b << std::endl;
    std::cout << &name << std::endl;

    return 0;
}