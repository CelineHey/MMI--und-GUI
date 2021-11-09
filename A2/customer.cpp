#include "customer.h"
#include "people.h"

Customer::Customer(){}
Customer::Customer(string name, int ID, int amountOfBorrowedMedia) : People(name, ID), m_amountOfBorrowedMedia(amountOfBorrowedMedia)){

}
