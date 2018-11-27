#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* args[]) {

    std::vector<int> numList = {3, 4, 5, 6, 7};

    for(int i = 0; i < numList.size(); ++i) {
        std::cout << numList[i] * 2 << ", ";
    }
    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    return 0;
}