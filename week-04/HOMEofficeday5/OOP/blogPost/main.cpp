#include <iostream>
#include "blogPost.h"

int main() {

    blogPost comein("John Doe", "lorem Ipsum", "Lorem ipsum dolor sit amet.", "2000.05.04.");
    std::cout << comein.getAuthorName() << ", " << comein.getTitle() << ", " << comein.getText() << ", " << comein.getPublicationDate() << std::endl;




    return 0;
}