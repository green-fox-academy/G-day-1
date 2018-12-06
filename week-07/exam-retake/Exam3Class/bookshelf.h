#ifndef EXAM3CLASS_BOOKSHELF_H
#define EXAM3CLASS_BOOKSHELF_H
#include <iostream>
#include "books.h"
#include <vector>

class BookShelf {

protected: std::vector<Books*> _books;

public: void addBooks(Books* books);
        void authorOfLightestBook();
        void authorWithTheMostPages();

};
#endif
