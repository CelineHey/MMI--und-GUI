#include "building.h"
#include "library.h"

Building::Building(){

}
Building::Building(string nameOfLibrary, string location, time_t buildingOpeningHours, string type) : Library(nameOfLibrary), m_location(location), m_buildingOpeningHours(buildingOpeningHours), m_type(type){

}
