#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> filter(std::vector<std::string> &list, const std::vector<std::string> &sweets);

int main(int argc, char* args[])
{
    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    for(const auto& sweet : filter(list, sweets))
    {
        std::cout << sweet << " ";
    }

    return 0;
}

std::vector<std::string> filter(std::vector<std::string> &list, const std::vector<std::string> &sweets){

    std::vector<std::string> candy = sweets;

    for (int i = 0; i < list.size(); i++) {
        std::find(candy.begin(), candy.end(), list[i]) != candy.end();
        if(candy[i] != list[i]){
            list.erase(list.begin() + i);
            i--;
        }
    }
    return list;
    }
