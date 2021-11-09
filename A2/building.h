#ifndef BUILDING_H
#define BUILDING_H
#include <string>
#include <time.h>
#include "library.h"

using namespace std;

class Building : public virtual Library {

protected:
    string m_location;
    time_t m_buildingOpeningHours;
    string m_type;

  public:

    Building();
    Building(string nameOfLibrary, string location, time_t buildingOpeningHours, string type) : Library(nameOfLibrary), m_location(location), m_buildingOpeningHours(buildingOpeningHours), m_type(type){

    }

    string getLocation(){
        return m_location;
    }
};

#endif // BUILDING_H
