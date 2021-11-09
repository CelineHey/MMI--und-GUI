#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>

using namespace std;


class Library {

protected:
    string m_nameOfLibrary;

public:

    Library();
    Library(string nameOfLibrary);

    string getNameOfLibrary(){
        return m_nameOfLibrary;
    }
    void setNameOfLibrary(string nameOfLibrary){
        m_nameOfLibrary = nameOfLibrary;
    }
};

#endif // LIBRARY_H
