#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* args[]) {

    std::vector<std::string> abc = {"first", "second", "third"};
    std::swap(abc[0], abc[2]);

    for(const auto printout : abc) {
        std::cout << printout << ", ";
    }
    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`
    return 0;
}