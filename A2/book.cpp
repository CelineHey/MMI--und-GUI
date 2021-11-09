#include "book.h"
#include "medium.h"
#include "shelf.h"

Book::Book(){}
Book::Book(string name, string theme,int numberOfBookPages) : Medium(name), Shelf(theme), m_numberOfBookPages(numberOfBookPages) : Medium(name), Shelf(theme), m_numberOfBookPages(numberOfBookPages){

}
