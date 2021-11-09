#ifndef PEOPLE_H
#define PEOPLE_H
#include "library.h"
#include <string>

using namespace std;


class People : virtual public Library{

protected:

    string m_state;
    string m_name;
    int m_ID;

public:
    People();
    People(string nameOfLibrary,string state, string name, int ID);
    string getState(){
        return m_state;
    }
    void setState(string state){
        m_state = state;
    }
    string getName(){
        return m_name;
    }
    void setName(string name){
        m_name = name;
    }
    int getID(){
        return m_ID;
    }
    void setID(int ID){
        m_ID = ID;
    }

};

#endif // PEOPLE_H
