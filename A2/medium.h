#ifndef MEDIUM_H
#define MEDIUM_H
#include "library"

class Medium : public Library{

private:

    char m_name[10];

public:

    Medium(char name[]) : Library(){

    }

    char getName();
    void setName(char name[]);

};

#endif // MEDIUM_H
