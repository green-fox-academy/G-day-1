#include <iostream>

int main()
{
    int a; int b; int c; int d; int e;

    std::cout << "Please, give me 5 numbers." << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;

    int array[] = {a, b, c, d, e};

    int *aPtr = &a; int *bPtr = &b; int *cPtr = &c; int *dPtr = &d; int *ePtr = &e;

    std::cout << *aPtr << ", " << *bPtr << ", " << *cPtr << ", " << *dPtr << ", " << *ePtr << std::endl;

    return 0;
}