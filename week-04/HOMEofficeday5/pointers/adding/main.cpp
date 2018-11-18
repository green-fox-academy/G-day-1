#include <iostream>

int main()
{
    int a = 20;
    int b = 17;
    int sum;

    int *aPtr = &a;
    int *bPtr = &b;

    sum = *aPtr + *bPtr;

    std::cout << sum << std::endl;

    return 0;

}