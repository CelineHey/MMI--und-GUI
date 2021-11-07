#ifndef ROCK_H
#define ROCK_H
#include <stdbool.h>
<<<<<<< HEAD
#include "staticgameentity.h"
=======
#include "
>>>>>>> fee68e4972bde7fe4dbe3cb7e4512f3ec4625018

class Rock : public StaticGameEntity{

private:
    int m_sharpness;


public:

    Rock(int sharpness, bool isDestroyable) : StaticGameEntity(isDestroyable){

    }

    int getSharpness();
    void setSharpness(int sharpness);
};

#endif // ROCK_H
