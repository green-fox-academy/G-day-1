#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";

    todoText.insert(0, "My todo:\n");
    todoText.append(" - Download games\n");
    todoText.append("\t- Diablo");

    std::cout << todoText << std::endl;

    return 0;
}