#ifndef ROCK_H
#define ROCK_H
#include <stdbool.h>
#include "staticgameentity.h"



class Rock : public virtual StaticGameEntity{

protected:
    int m_sharpness;


public:

    Rock(int sharpness, bool isDestroyable) : StaticGameEntity(isDestroyable), m_sharpness(sharpness){

    }

    int getSharpness(){
        return m_sharpness;
    }
    void setSharpness(int sharpness){
        m_sharpness = sharpness;
    }
};

#endif // ROCK_H
