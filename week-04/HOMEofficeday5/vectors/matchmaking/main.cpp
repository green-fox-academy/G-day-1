#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys)
{
    std::vector<std::string> newgirls = girls;
    std::vector<std::string> newboys = boys;
    std::vector<std::string> forevertogether;

    for (int i = 0; i < newgirls.size(); ++i) {
        forevertogether.push_back(newgirls[i]);
        forevertogether.push_back(newboys[i]);
    }
    return forevertogether;
}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    for(const auto& forevertogether : makingMatches(girls, boys)){
        std::cout << forevertogether << " ";
    }

    return 0;
}