#include <iostream>

int main() {
    int a = 3 ;
    int b = 100;
    int c = 44;
    int d = 125;
    int e = 8;

    a+=10;
    b-= 7;
    c*= 2;
    d/= 5;
    e*= 2;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;


    int f1 = 123;
    int f2 = 345;
    bool isf1bigger = f1 > f2;


    std::cout << std::boolalpha << isf1bigger << std::endl;

    int g1 = 350;
    int g2 = 200;
    bool doubleofg2isbigger = g2 * 2 > g1;

    std::cout << std::boolalpha << doubleofg2isbigger << std::endl;

    int h = 135798745;
    bool is11adividor = h % 11;

    std::cout << std::boolalpha << is11adividor << std::endl;

    int i1 = 10;
    int i2 = 3;
    bool isi1higher = i1 > i2 * 2 && i1 < i2 * i2 * i2;

    std::cout << std::boolalpha << isi1higher << std::endl;

    int j = 1521;

    if(j / 3 || j / 5);

    std::cout << "True" << std::endl;






    return 0;
}