#include "cd.h"
#include "medium.h"

Cd::Cd(){}
Cd::Cd(string name, bool isBorrowed, int numberOfSongs, int number, int amountOfBorrowedMedia) : Medium(number, amountOfBorrowedMedia,name,isBorrowed), m_numberOfSongs(numberOfSongs){

}
