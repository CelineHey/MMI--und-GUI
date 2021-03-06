#ifndef BOOK_H
#define BOOK_H
#include "medium.h"
#include "shelf.h"


class Book : public Medium, public Shelf{

protected:

    int m_numberOfBookPages;

public:

    Book();
    Book(string name, bool isBorrowed, string theme,int numberOfBookPages,int number, int amountOfBorrowedMedia);

    int getNumberOfBookPages(){
        return m_numberOfBookPages;
    }
    void setNumberOfBookPages(int numberOfBookPages){
        m_numberOfBookPages = numberOfBookPages;
    };

};

#endif // BOOK_H
