#ifndef ROCK_H
#define ROCK_H
#include <stdbool.h>
#include "staticgameentity.h"



class Rock : public virtual StaticGameEntity{

protected:
    int m_sharpness;


public:

    Rock(string name, Vector2 position, int sharpness, bool isDestroyable);
    ~Rock();

    int getSharpness(){
        return m_sharpness;
    }
    void setSharpness(int sharpness){
        m_sharpness = sharpness;
    }
};

#endif // ROCK_H
