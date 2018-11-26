#include <iostream>

void counter(std::string x);

int main() {

    std::string a = "AnimaLiberA";
    counter(a);

    return 0;
}

void counter(std::string x) {
    int count = 0;
    for (int i = 0; i < x.size(); i++) {
        if (x.at(i) == 'a' || x.at(i) == 'A')
            count++;
    }
    std::cout << count << std::endl;
}