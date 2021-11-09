#include "book.h"
#include "medium.h"
#include "shelf.h"

Book::Book(){}
Book::Book(string name, bool isBorrowed, string theme,int numberOfBookPages,int number, int amountOfBorrowedMedia) : Medium(number,amountOfBorrowedMedia,name, isBorrowed), Shelf(number,theme), m_numberOfBookPages(numberOfBookPages){

}
