#include "cd.h"
#include "medium.h"

Cd::Cd(){}
Cd::Cd(string name, bool isBorrowed, int numberOfSongs) : Medium(name,isBorrowed), m_numberOfSongs(numberOfSongs){

}
