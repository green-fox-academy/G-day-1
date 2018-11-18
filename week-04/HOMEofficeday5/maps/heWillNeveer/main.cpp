#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(int argc, char* args[])
{ std::vector<int> myFavoriteNumbers2 = {8, 6, 2, 0};
    std::cout << myFavoriteNumbers2[2] << std::endl;
    std::cout << myFavoriteNumbers2.size() << std::endl;
    myFavoriteNumbers2.push_back(27);
    std::cout << myFavoriteNumbers2.size() << std::endl;
    std::cout << myFavoriteNumbers2[4] << std::endl;
    myFavoriteNumbers2.insert(myFavoriteNumbers2.begin(), 666);

    for (int i = 0; i < myFavoriteNumbers2.size(); i++) {
        std::cout << myFavoriteNumbers2[i] << std::endl;
    }

    return 0;
}