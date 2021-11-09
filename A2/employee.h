#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"people.h"
#include <string>

class Employee : public People{

protected:
    string m_typeOfJob;

public:

    Employee();
    Employee(string nameOfLibrary, string name, string state, int ID, string typeOfJob);

    string getTypeOfJob(){
        return m_typeOfJob;
    }
    void setTypeOfJob(string typeOfJob){
        m_typeOfJob = typeOfJob;
    }

};

#endif // EMPLOYEE_H
