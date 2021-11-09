#include "customer.h"
#include "people.h"

Customer::Customer(){}
Customer::Customer(string name, int ID, int amountOfBorrowedMedia, int state, int nameOfLibrary) : People(nameOfLibrary, state ,name, ID), m_amountOfBorrowedMedia(amountOfBorrowedMedia)){

}
