#ifndef SHELF_H
#define SHELF_H
#include "floor.h"
#include <string>

using namespace std;

class Shelf : virtual public Floor {

protected:
    string m_theme;

public:
    Shelf();
    Shelf(int number, string theme);

    string getTheme(){
        return m_theme;
    }
    void setTheme(string theme){
        m_theme = theme;
    }
};

#endif // SHELF_H
