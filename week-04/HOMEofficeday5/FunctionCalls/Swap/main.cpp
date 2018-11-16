#include <iostream>
#include <string>
void changer(int &x, int &y);

int main(int argc, char* args[]) {

    int a = 15;
    int b = 23;

    std::cout << a << "," << b << std::endl;

    changer(b, a);

    std::cout << (a) << "," << b << std::endl;
    return 0;
}
void changer(int &x, int &y) {
    int keeper = x;
    x = y;
    y = keeper;

}