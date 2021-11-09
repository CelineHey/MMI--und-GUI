#ifndef FLOOR_H
#define FLOOR_H
#include "building.h"
#include <string>

using namespace std;
class Floor : public virtual Building {

protected:
    int m_number;

public:

    Floor();
    Floor(string location, time_t buildingOpeningHours, string type, int number) : Building(location,buildingOpeningHours, type), m_number(number){

    }


};

#endif // FLOOR_H
