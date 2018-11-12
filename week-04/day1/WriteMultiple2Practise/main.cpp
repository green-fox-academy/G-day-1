#include <iostream>
#include <fstream>
#include <string>

int mylittlepony (std::string path, std::string word, int number) {

    std::ofstream PractiseFile(path);
    if(PractiseFile.is_open()){
        for(int i = 0; i < number; ++i) {
            PractiseFile << word << std::endl;

        }
    }else {
        std::cout << "Sorry, cannot find file. :S" << std::endl;
    }
}

int main() {
    std::string word;
    int number;
    std::string path = "../practisefile.txt";
    std::cin >> word >> number;

    mylittlepony(path, word, number);

    return 0;
}
int mylittlepony (std::string path, std::string word, int number);