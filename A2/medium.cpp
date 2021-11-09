#include "medium.h"
#include "customer.h"
#include "floor.h"

Medium::Medium(){}
Medium::Medium(string nameOfLibrary, string type, string location, string state, int ID, string name, time_t buildingOpeningHours, int number, int amountOfBorrowedMedia, string mediaName, bool isBorrowed) : Library(nameOfLibrary), Building(nameOfLibrary,location, buildingOpeningHours, type), Customer(name, ID, amountOfBorrowedMedia, state, nameOfLibrary), {}
