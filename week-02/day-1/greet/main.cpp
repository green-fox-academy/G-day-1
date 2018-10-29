#include <iostream>


std::string greet(std::string x);

int main() {

    std::string a1 = "Greenfox";
    greet(a1);


    return 0;
}

std::string greet(std::string x) {
std::cout << "Greetings dear , " << x << std::endl;


}