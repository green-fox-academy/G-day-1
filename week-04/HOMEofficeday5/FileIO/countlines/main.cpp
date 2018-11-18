#include <iostream>
#include <fstream>
#include <string>
void hernancattaneo();

int main () {

    hernancattaneo();

    return 0;
}
void hernancattaneo() {
    std::ifstream music("../my-file.txt");
    if (music.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    int numLines = 0;
    std::ifstream in("../my-file.txt");
    std::string unused;
    while ( std::getline(in, unused) )
        ++numLines;
    std::cout << numLines << std::endl;
}
