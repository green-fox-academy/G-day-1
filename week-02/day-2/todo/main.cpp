#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = "\n - Buy milk\n";

    todoText.insert(0, "My todo:");


    std::string download = " - Download games\n";
    todoText.append(download);

    std::string diablo = "\t- Diablo";
    todoText.append(diablo);




    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indention

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    std::cout << todoText << std::endl;

    return 0;
}