#include <iostream>
#include <fstream>
#include <string>
void function(std::string path, std::string word, int number);

int main() {

    std::string path = "../kicsi.txt";
    std::string word;
    int number;

    std::cin >> word >> number;

    function(path, word, number);


    return 0;
}

void function(std::string path, std::string word, int number) {

    std::ofstream PractiseFile(path);
    if(PractiseFile.is_open()){
        for(int i = 0; i < number; ++i) {
            PractiseFile << word << std::endl;

        }
    }else {
        std::cout << "Sorry, cannot find file. :S" << std::endl;
    }
}
