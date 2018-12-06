#ifndef EXAM3CLASS_HARDCOVER_BOOKS_H
#define EXAM3CLASS_HARDCOVER_BOOKS_H
#include <iostream>
#include "books.h"

class HardcoverBooks : public Books {

    public:
    HardcoverBooks(const std::string &title, const std::string &author, int releaseYear, int pageNumber);

};
#endif
