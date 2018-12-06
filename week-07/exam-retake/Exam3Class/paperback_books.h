#ifndef EXAM3CLASS_PAPERBACK_BOOKS_H
#define EXAM3CLASS_PAPERBACK_BOOKS_H
#include <iostream>
#include "books.h"

class PaperbackBooks : public Books {
public:
    PaperbackBooks(const std::string &title, const std::string &author, int releaseYear, int pageNumber);

};
#endif
