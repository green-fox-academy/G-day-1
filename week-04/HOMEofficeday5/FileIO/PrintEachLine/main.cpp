#include <iostream>
#include <exception>
#include <string>
#include <fstream>

int main () {
    std::ifstream file;
    file.open("../my-file.txt");

    if(file.is_open()){
        std::cout << ":)" << std::endl;
    }else {
        std::cout << ":(" << std::endl;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
    return 0;
}
