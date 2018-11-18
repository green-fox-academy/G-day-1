#include <iostream>
#include "PostIt.h"
int main() {

    PostIt comein("orange", "Idea1", "blue");
    std::cout << comein.getBackgroundColor() << " " << comein.getText() << " " << comein.getTextColor() << std::endl;

    PostIt comein1("pink", "Awesome", "black");
    std::cout << comein1.getBackgroundColor() << " " << comein1.getText() << " " << comein1.getTextColor() << std::endl;

    PostIt comein2("yellow", "Superb", "green");
    std::cout << comein2.getBackgroundColor() << " " << comein2.getText() << " " << comein2.getTextColor() << std::endl;

    return 0;
}