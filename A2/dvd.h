#ifndef DVD_H
#define DVD_H
#include <stdbool.h>
#include "medium"

class Dvd : public Medium{

private:

    bool m_containsExtraDvd;

public:

    Dvd(char name[], bool containsExtraDvd) : Medium(containsExtraDvd){

    }

    bool getContainsExtraDvd;
    void setContainsExtraDvd(bool containsExtraDvd);

};

#endif // DVD_H
