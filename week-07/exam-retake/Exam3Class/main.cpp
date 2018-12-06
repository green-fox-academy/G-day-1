#include <iostream>
#include "paperback_books.h"
#include "hardcover_books.h"
#include "books.h"
#include "bookshelf.h"

int main() {

    HardcoverBooks Book1("Title1", "Author1", 2000, 190);
    PaperbackBooks Book2("Title2", "Author2", 1999, 121);
    HardcoverBooks Book3("Title3", "Author3", 2000, 150);
    PaperbackBooks Book4("Title4", "Author4", 1888, 180);

    BookShelf polcocska;
    polcocska.addBooks(&Book1);
    polcocska.addBooks(&Book2);
    polcocska.addBooks(&Book3);
    polcocska.addBooks(&Book4);

    polcocska.authorOfLightestBook();
    polcocska.authorWithTheMostPages();

    return 0;
}
