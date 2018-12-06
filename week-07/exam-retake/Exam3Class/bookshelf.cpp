#include "bookshelf.h"

void BookShelf::addBooks(Books* books) {
    _books.push_back(books);
}

void BookShelf::authorOfLightestBook() {
    int lightest = _books[0]->getWeight();
    int x = 0;

    for (int i = 0; i < _books.size(); ++i) {
        if(_books[i]->getWeight() < lightest) {
           lightest = _books[i]->getWeight();
           x = i;
        }
    }std::cout << "The author of the lightest book is:  " << _books[x]->getAuthor() << "." << std::endl;

}
void BookShelf::authorWithTheMostPages() {
    int mostPages = _books[0]->getPageNumber();
    int x = 0;

    for (int i = 0; i < _books.size(); ++i) {
        if(_books[i]->getPageNumber() > mostPages) {
            mostPages = _books[i]->getPageNumber();
            x = i;
        }
    }std::cout << _books[x]->getAuthor() << " wrote the most pages." << std::endl;
}

