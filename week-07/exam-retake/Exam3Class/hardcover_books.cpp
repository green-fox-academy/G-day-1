#include "hardcover_books.h"

HardcoverBooks::HardcoverBooks(const std::string &title, const std::string &author, int releaseYear, int pageNumber)
        : Books(title, author, releaseYear, pageNumber, pageNumber * 10 + 100) {}

