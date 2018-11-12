#include <iostream>
#include <fstream>
#include <string>

void whenigrowup() {
    std::ifstream music("../music.txt");
    if (music.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    int numLines = 0;
    std::ifstream in("../music.txt");
    std::string unused;
    while ( std::getline(in, unused) )
        ++numLines;
    std::cout << numLines << std::endl;
    }



int main () {


    whenigrowup();


    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    return 0;
}


void whenigrowup();

