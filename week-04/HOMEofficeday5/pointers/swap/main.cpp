#include <iostream>

void changer(int &x, int &y);

int main ()
{
    int a = 10;
    int b = 316;

    int *aPtr = &a;
    int *bPtr = &b;

    changer(a, b);

    std::cout << *aPtr << ", " << *bPtr << std::endl;
    return 0;
}

void changer(int &x, int &y) {
    int keeper = x;
    x = y;
    y = keeper;
    int *keeperPtr = &x;
    int *xPtr = &y;
}
