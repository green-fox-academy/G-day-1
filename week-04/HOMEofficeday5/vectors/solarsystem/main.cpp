#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> putSaturn(const std::vector<std::string>& planets) {

    std::vector<std::string> planets2 = planets;
    planets2.insert(planets2.begin() + 5, "Saturn");
    return planets2;
}

int main(int argc, char* args[])
{
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};
    for(const auto& planet : putSaturn(planets))
    {
        std::cout << planet << " ";
    }
    return 0;
}