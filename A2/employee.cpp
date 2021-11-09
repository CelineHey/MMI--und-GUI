#include "employee.h"
#include "people.h"

Employee::Employee(){}
Employee::Employee(string name,string state, int ID, string typeOfJob): People(name, ID) , m_typeOfJob(typeOfJob) {

}
