#ifndef EXAM3CLASS_BOOKS_H
#define EXAM3CLASS_BOOKS_H
#include <iostream>

class Books {
public:
   std::string getInformation();
    const std::string &getAuthor() const;
    int getWeight() const;
    int getPageNumber() const;

protected:
    Books(const std::string &title, const std::string &author, int releaseYear, int pageNumber, int weight);

private:
    std::string _title;
    std::string _author;
    int _releaseYear;
    int _pageNumber;
    int _weight;

};

#endif
