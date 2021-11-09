#ifndef CD_H
#define CD_H
#include "medium.h"

class Cd : public Medium{

protected:

    int m_numberOfSongs;

public:

    Cd();
    Cd(string name, bool isBorrowed, int numberOfSongs) : Medium(name,isBorrowed), m_numberOfSongs(numberOfSongs){

    }

    int getNumberOfSongs(){
        return m_numberOfSongs;
    }
    void setNumberOfSongs(int numberOfSongs){
        m_numberOfSongs = numberOfSongs;
    };

};

#endif // CD_H
