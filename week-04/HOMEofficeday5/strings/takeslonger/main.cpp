#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    std::string from = "It";

    int start_pos = quote.find(from);
    if(start_pos == std::string::npos)
        std::cout << "Cannot replace" << std::endl;
    else
        quote.replace(start_pos, from.length(), "It always takes longer than");
    std::cout << quote << std::endl;
    return 0;
}