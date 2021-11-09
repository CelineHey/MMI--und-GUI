#ifndef BUILDING_H
#define BUILDING_H
#include <string>
#include <time.h>
#include "library.h"

using namespace std;

class Building : virtual public Library {

protected:
    string m_location;
    time_t m_buildingOpeningHours;
    string m_type;

  public:

    Building();
    Building(string nameOfLibrary, string location, time_t buildingOpeningHours, string type);

    string getLocation(){
        return m_location;
    }
    void setLocation(string location){
        m_location = location;
    }
    time_t getBuildingOpeningHours(){
        return m_buildingOpeningHours;
    }
    void setBuildingOpeningHours( time_t buildingOpendingHours){
        m_buildingOpeningHours = buildingOpendingHours;
    }
    string getType(){
        return m_type;
    }
    void setType(string type){
        m_type = type;
    }
};

#endif // BUILDING_H
