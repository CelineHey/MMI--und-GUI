#include "dvd.h"
#include "medium.h"

Dvd::Dvd(){}
Dvd::Dvd(string name,string mediaName, int ID, int amountOfBorrowedMedia, string state, string nameOfLibrary, bool isBorrowed, int number, bool containsExtraDvd) : Medium(number,amountOfBorrowedMedia,name, isBorrowed), m_containsExtraDvd(containsExtraDvd){

}
