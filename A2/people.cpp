#include "people.h"
#include "library.h"

People::People(){}
People::People(string nameOfLibrary,string state, string name, int ID): Library(nameOfLibrary), m_name(name), m_state(state), m_ID(ID)
