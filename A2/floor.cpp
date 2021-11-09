#include "floor.h"
#include "building.h"

Floor::Floor(){};
Floor::Floor(string location, time_t buildingOpeningHours, string type, int number) : Building(location,buildingOpeningHours, type), m_number(number){}
