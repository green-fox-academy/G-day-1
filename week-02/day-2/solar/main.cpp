#include <iostream>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets)
{
    std::vector<std::string> temp = planets;
    temp.push_back("Saturn");
    return temp;

}

int main() {
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Uranus Neptune Saturn
    for(const auto& planet : putSaturn(planets))
    {
        std::cout << planet << " ";
    }

    return 0;
}