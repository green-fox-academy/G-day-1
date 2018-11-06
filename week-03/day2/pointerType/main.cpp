#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPointer = &a;
    std::cout << aPointer << std::endl;

    double *bPointer = &b;
    std::cout << bPointer << std::endl;

    std::string *namePointer = &name;
    std::cout << namePointer << std::endl;

    std::cout << *aPointer << "; " << *bPointer << "; " <<  *namePointer << std::endl;


    return 0;
}


