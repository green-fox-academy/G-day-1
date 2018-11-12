#include <iostream>
#include <fstream>
#include <string>
#include <map>

int writethemintofiles(std::string path, std::string word, int number) {

    std::ofstream MyLittleFile(path);
    if(MyLittleFile.is_open()){
        for(int i = 0; i < number; ++i) {
            MyLittleFile << word << std::endl;
        }
    }else {
        std::cout << "Sorry, cannot open file." << std::endl;
    }
}
int main() {

    std::string word;
    int number;
    std::string path = "../mylittlefile.txt";
    std::cin >> word >> number;

    writethemintofiles(path, word, number);


    return 0;
}
int writethemintofiles(std::string path, std::string word, int number);


