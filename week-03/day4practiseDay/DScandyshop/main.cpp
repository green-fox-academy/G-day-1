#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> filter(std::vector<std::string> &list, const std::vector<std::string> &candy){


    for(int i = 0; i < list.size() ; i++){
        std::find(candy.begin(), candy.end(), list[i]) != candy.end();
        if(candy[i] != list[i]){
            list.erase(list.begin() + i);
            i--;
        }
    }
    return list;
}

int main(int argc, char* args[])
{
    const std::vector<std::string> sweets = {"Cupcake", "Brownie"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the list as a parameter.

    // Expected output: Cupcake Brownie
    for(const auto& sweet : filter(list, sweets))
    {
        std::cout << sweet << " ";
    }

    return 0;
}