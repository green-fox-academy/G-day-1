#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> quoteSwap(std::vector<std::string> &quote);

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};

    quoteSwap(quote);

    for(const auto anything : quote){
        std::cout << anything << " ";
        }

    return 0;
}
std::vector<std::string> quoteSwap(std::vector<std::string> &quote) {
    std::swap(quote[2], quote[5]);
    return quote;
}

