#include "books.h"

Books::Books(const std::string &title, const std::string &author, int releaseYear, int pageNumber, int weight) :
    _title(title),
    _author(author),
    _releaseYear(releaseYear),
    _pageNumber(pageNumber),
    _weight(weight){}

std::string Books::getInformation() {
    return _author + " " + _title + " (" + std::to_string(_releaseYear) + ")";
}

const std::string &Books::getAuthor() const {
    return _author;
}

int Books::getWeight() const {
    return _weight;
}

int Books::getPageNumber() const {
    return _pageNumber;
}
