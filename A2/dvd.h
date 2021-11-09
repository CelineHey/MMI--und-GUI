#ifndef DVD_H
#define DVD_H
#include <stdbool.h>
#include "medium.h"

class Dvd : public Medium{

protected:

    bool m_containsExtraDvd;

public:

    Dvd();
    Dvd(string name, bool containsExtraDvd) : Medium(name) , m_containsExtraDvd(containsExtraDvd){

    }

    bool getContainsExtraDvd(){
       return m_containsExtraDvd;
    }
    void setContainsExtraDvd(bool containsExtraDvd){
        m_containsExtraDvd = containsExtraDvd;
    };

};

#endif // DVD_H
