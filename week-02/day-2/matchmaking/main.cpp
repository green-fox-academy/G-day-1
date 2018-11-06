#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys) {
    std::vector<std::string> couples = girls;
    int j = 1;
    for(int i = 0; i < boys.size() -1; i++){
        couples.insert(couples.begin()+ j, boys[i]);
        j += 2;

    }
    return couples;
}



int main() {
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...

    std::vector<std::string> couples = makingMatches(girls, boys);


    for(const auto& couples : makingMatches(girls, boys)) {
        std::cout << couples << " ";
    }


    return 0;
}