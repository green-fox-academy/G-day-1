#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int p1[] = {1,2,3};
    int p2[] = {4,5};

    if(sizeof(p1) < sizeof(p2)) {
        std::cout << "p2 is bigger ,,|,," << std::endl;

    }

    return 0;
}