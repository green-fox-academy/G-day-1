#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char* args[]) {

    std::vector<int> aj = {3, 4, 5, 6, 7};

    std::reverse(aj.begin(),aj.end());

    for(const auto printout : aj){
        std::cout << printout << ", ";
    }
    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    return 0;
}