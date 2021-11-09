#include "medium.h"
#include "customer.h"
#include "floor.h"

Medium::Medium(){}
Medium::Medium(string nameOfLibrary, string state, int ID, string name, time_t buildingOpeningHours, string location, string type, int number, int amountOfBorrowedMedia, string mediaName, bool isBorrowed) : Floor(nameOfLibrary, location, buildingOpeningHours, type, number), Customer(name, ID, amountOfBorrowedMedia, state, nameOfLibrary), m_mediaName(mediaName), m_isBorrowed(isBorrowed){}
