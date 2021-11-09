#ifndef FLOOR_H
#define FLOOR_H
#include "building.h"
#include <string>

using namespace std;
class Floor : virtual public Building {

protected:
    int m_number;

public:

    Floor();
    Floor(string location, time_t buildingOpeningHours, string type, int number);

    int getNumber(){
        return m_number;
    }
    void setNumber(int number){
        m_number = number;
    }


};

#endif // FLOOR_H
