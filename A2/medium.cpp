#include "medium.h"
#include "customer.h"
#include "floor.h"

Medium::Medium(){}
Medium::Medium(int number, int amountOfBorrowedMedia, string name, bool isBorrowed) : Floor(number), Customer(amountOfBorrowedMedia), m_name(name), m_isBorrowed(isBorrowed){}
