#ifndef CD_H
#define CD_H
#include "medium.h"

class Cd : public Medium{

private:

    int m_numberOfSongs;

public:

    Cd(char name[], int numberOfSongs) : Medium(name[]){

    }

    int getNumberOfSongs();
    void setNumberOfSongs(int numberOfSongs);

};

#endif // CD_H
