#ifndef BOOK_H
#define BOOK_H
#include "medium"


class Book : public Medium{

private:


    int m_numberOfBookPages;

public:

    Book(char name[], int numberOfBookPages) : Medium(name[]){

    }

};

#endif // BOOK_H
