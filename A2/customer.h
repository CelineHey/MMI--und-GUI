#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "people.h"

class Customer : public virtual People {

protected:
    int m_amountOfBorrowedMedia;

public:

    Customer();
    Customer(string name, int ID, int amountOfBorrowedMedia) : People(name, ID), m_amountOfBorrowedMedia(amountOfBorrowedMedia){

    }


};

#endif // CUSTOMER_H
