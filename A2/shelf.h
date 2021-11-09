#ifndef SHELF_H
#define SHELF_H
#include "floor.h"
#include <string>

using namespace std;

class Shelf : public virtual Floor {

protected:
    string m_theme;

public:
    Shelf();
    Shelf(int number, string theme) : Floor(number), m_theme(theme){

    }
};

#endif // SHELF_H
