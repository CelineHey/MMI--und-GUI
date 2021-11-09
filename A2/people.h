#ifndef PEOPLE_H
#define PEOPLE_H
#include "library.h"
#include <string>

using namespace std;


class People : public virtual Library{

protected:

    string m_state;
    string m_name;
    int m_ID;

public:
    People();
    People(string nameOfLibrary,string state, string name, int ID): Library(nameOfLibrary), m_name(name), m_state(state), m_ID(ID){

    }

};

#endif // PEOPLE_H
