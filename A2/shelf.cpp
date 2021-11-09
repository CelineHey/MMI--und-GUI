#include "shelf.h"
#include "building.h"

Shelf::Shelf(){}
Shelf::Shelf(int number, string theme) : Floor(number), m_theme(theme){}
