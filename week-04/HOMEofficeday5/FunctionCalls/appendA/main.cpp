#include <iostream>
#include <string>

std::string appendAFunc(std::string nix);

int main(int argc, char* args[]) {
    std::string typo = "Chincill";
    std::cout << appendAFunc(typo) << std::endl;

    return 0;
}
std::string appendAFunc(std::string nix){
    return nix + "a";
}