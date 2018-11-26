#include <iostream>
#include <fstream>
#
int main(int argc, char* args[]) {


    std::ifstream listtask;
    listtask.open("listtask.txt");
    std::string line;

    if(argc == 1) {
        std::cout << "Command Line Todo application\n =============================\n" << std::endl;
        std::cout << "Command line arguments:\n -l   Lists all the tasks\n -a   Adds a new task" << std::endl;
        std::cout << " -r   Removes a task\n -c   Completes a task" << std::endl;
    }
    else if(argc == 2) {
        std::string command = std::string(args[1]);
        if (command == "-l") {
            while (std::getline(listtask, line)) {
                std::cout << line << std::endl;


        }


        }

    }
    listtask.close();

    return 0;
}
