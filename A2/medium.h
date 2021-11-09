#ifndef MEDIUM_H
#define MEDIUM_H
#include "floor.h"
#include "customer.h"
#include <string>

using namespace std;

class Medium : virtual public Floor, public Customer{

protected:

    string m_mediaName;
    bool m_isBorrowed;

public:

    Medium();
    Medium(string nameOfLibrary, string state, int ID, string name, time_t buildingOpeningHours, string location, string type, int number, int amountOfBorrowedMedia, string mediaName, bool isBorrowed);


    string getMediaName(){
        return m_mediaName;
    }
    void setName(string mediaName){
        m_mediaName = mediaName;
    };
    bool getIsBorrowed(){
        return m_isBorrowed;
    }
    void setIsBorrowed(bool isBorrowed){
        m_isBorrowed = isBorrowed;
    }

};

#endif // MEDIUM_H
