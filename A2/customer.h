#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "people.h"

class Customer : virtual public People {

protected:
    int m_amountOfBorrowedMedia;

public:

    Customer();
    Customer(string name, int ID, int amountOfBorrowedMedia, int state, int nameOfLibrary);

    int getAmountOfBorrowedMedia(){
        return m_amountOfBorrowedMedia;
    }
    void setAmountOfBorrowedMedia(int amountOfBorrowedMedia){
        m_amountOfBorrowedMedia = amountOfBorrowedMedia;
    }


};

#endif // CUSTOMER_H
