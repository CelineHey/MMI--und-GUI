#ifndef ROCK_H
#define ROCK_H
#include <stdbool.h>

class Rock : public StaticGameEntity{

private:
    int m_sharpness;


public:

    Rock(int sharpness, bool isDestroyable) : StaticGameEntity(isDestoryable){

    }

    int getSharpness();
    void setSharpness(int sharpness);
};

#endif // ROCK_H
