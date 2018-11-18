#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ofstream myFile;
    myFile.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    try {
        myFile.open("../my-file.txt");
        std::string content = "Barta Gergő";
        myFile << content;
        myFile.close();
        }catch (std::ofstream::failure& e) {
        std::cout << e.what() << std::endl;
        }
        return 0;


}