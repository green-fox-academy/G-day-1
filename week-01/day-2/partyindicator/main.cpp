#include <iostream>

int main(int argc, char* args[]) {

    int girls;
    int boys;

    std::cout << "Please, tell me how many girls and boys are coming to the party. First: the girls, second: the boys." << std::endl;
    std::cin >> girls;
    std::cin >> boys;
    std::cout << "So " << girls << " girls and " << boys << " boys are coming." << std::endl;

    if(girls == boys && girls + boys >= 20){
        std::cout << "The party is excellent!" << std::endl;
    } else if(girls + boys >= 20 && boys != girls) {
        std::cout << "Quite cool party!" << std::endl;
    } else if(girls + boys <= 20 && girls > 0) {
        std::cout << "Average party..." << std::endl;
    } else if(girls == 0) {
        std::cout << "Sausage party" << std::endl;
    }


    return 0;
}