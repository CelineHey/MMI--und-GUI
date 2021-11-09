#include "floor.h"
#include "building.h"

Floor::Floor(){};
Floor::Floor(string nameOfLibrary, string location, time_t buildingOpeningHours, string type, int number) : Library(nameOfLibrary), Building(nameOfLibrary, location,buildingOpeningHours, type), m_number(number){}
