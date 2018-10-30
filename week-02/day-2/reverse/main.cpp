#include <iostream>
#include <string>
#include <algorithm>



int main(int argc, char* args[])
{
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";


        std::reverse(reversed.begin(),reversed.end());

        std::cout << reversed << std::endl;


    return 0;
}