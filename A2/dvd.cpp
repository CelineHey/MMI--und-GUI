#include "dvd.h"
#include "medium.h"

Dvd::Dvd(){}
Dvd::Dvd(string name,string mediaName, int ID, int amountOfBorrowedMedia, string state, string nameOfLibrary, bool isBorrowed, int number) : People(state, nameOfLibrary,name, ID), Medium(mediaName, isBorrowed,amountOfBorrowedMedia, number), m_amountOfBorrowedMedia(amountOfBorrowedMedia){

}
