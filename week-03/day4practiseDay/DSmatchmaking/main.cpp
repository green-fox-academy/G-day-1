#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys){
    std::vector<std::string> newgirls = girls;
    std::vector<std::string> newboys = boys;
    std::vector<std::string> them;

    int i;


    for(i = 0; i < newgirls.size(); i++){

       them.push_back(newgirls[i]);
       them.push_back(newboys[i]);
    }

    return them;
}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};


    for(const auto& them : makingMatches(girls, boys))
    {
        std::cout << them << " ";
    }

    return 0;
}