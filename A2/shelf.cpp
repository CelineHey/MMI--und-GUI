#include "shelf.h"
#include "building.h"

Shelf::Shelf(){}
Shelf::Shelf(string nameOfLibrary, string location, time_t buildingOpeningHours, string type, int number, string theme) : Floor(nameOfLibrary, location, buildingOpeningHours, type, number), m_theme(theme){}
