#include <iostream>
#include "BlogPost.h"

int main() {

    BlogPost tellme("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04.");
    std::cout << tellme.getauthorName() << " " << tellme.gettitle() << " " << tellme.gettext() << " " << tellme.getpublicationDate() << std::endl;

    BlogPost tellme2("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10.");
    std::cout << tellme2.getauthorName() << " " << tellme2.gettitle() << " " << tellme2.gettext() << " " << tellme2.getpublicationDate() << std::endl;

    return 0;
}