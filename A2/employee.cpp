#include "employee.h"
#include "people.h"
#include "library.h"

Employee::Employee(){}
Employee::Employee(string nameOfLibrary, string name,string state, int ID, string typeOfJob): Library(nameOfLibrary),  People(nameOfLibrary, name, state, ID) , m_typeOfJob(typeOfJob) {

}
