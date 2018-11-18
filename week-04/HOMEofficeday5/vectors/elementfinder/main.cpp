#include <iostream>
#include <algorithm>
#include <vector>

std::string containsSeven(const std::vector<int>& numbers);
std::string containsSeven_stdfind(const std::vector<int>& numbers);

int main(int argc, char* args[])
{
    const std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << containsSeven(numbers) << std::endl;
    std::cout << containsSeven_stdfind(numbers) << std::endl;

    return 0;
}

std::string containsSeven(const std::vector<int>& numbers){
    for (int i = 0; i < numbers.size(); ++i) {
        if(numbers[i] == 7) {
            return "Horray1";
        }else{
            return "nooooooo1";
        }
    }
}

std::string containsSeven_stdfind(const std::vector<int>& numbers){
    if ( std::find(numbers.begin(), numbers.end(), 7) != numbers.end() ){
        return "Horray";
    }
    else{
       return "noo..";
    }
}