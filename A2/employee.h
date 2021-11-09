#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"people.h"
#include <string>

class Employee : public People{

protected:
    string m_typeOfJob;

public:

    Employee();
    Employee(string name, int ID, string typeOfJob): People(name, ID) , m_typeOfJob(typeOfJob){

    }



};

#endif // EMPLOYEE_H
