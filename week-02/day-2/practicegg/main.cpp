#include <iostream>
#include <vector>
#include <map>
#include <string>

int main() {

    std::vector<int> myFavoriteNumbers2 = {8, 6 , 2, 0};
    std::cout << myFavoriteNumbers2[3] << std::endl;

    std::cout << myFavoriteNumbers2.size() << std::endl;

    myFavoriteNumbers2.push_back(27);


    std::map<std::string, int> students = {{"Jozsi", 8}, {"Tibi",9}, {"Peti", 7}};
    std::cout << "Tibi ennyi éves: " << students["Tibi"] << std::endl;


    std::string mentorName = "Tojas";
    mentorName.push_back('k');
    mentorName.push_back('a');

    std::cout << mentorName << std::endl;

    return 0;
}