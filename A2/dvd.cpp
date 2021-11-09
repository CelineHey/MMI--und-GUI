#include "dvd.h"
#include "medium.h"

Dvd::Dvd(){}
Dvd::Dvd(string name, int ID, int amountOfBorrowedMedia) : People(name, ID), m_amountOfBorrowedMedia(amountOfBorrowedMedia){

}
