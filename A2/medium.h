#ifndef MEDIUM_H
#define MEDIUM_H
#include "floor.h"
#include "customer.h"
#include <string>

using namespace std;

class Medium : public virtual Floor, public Customer{

protected:

    string m_name;
    bool m_isBorrowed;

public:

    Medium();
    Medium(int number, int amountOfBorrowedMedia, string name, bool isBorrowed) : Floor(number), Customer(amountOfBorrowedMedia), m_name(name), m_isBorrowed(isBorrowed){

    }




public:

    Medium(string name) : Library(){

    }

    string getName(){
        return m_name;
    }
    void setName(string name){
        m_name = name;
    };

};

#endif // MEDIUM_H
