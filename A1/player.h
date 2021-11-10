#ifndef PLAYER_H
#define PLAYER_H
#include "dynamicgameentity.h"
#include <iostream>

class Player : public DynamicGameEntity{

private:
    int  m_constValue;

public:
    Player(string name, Vector2 position, int const constValue, int lifepoints );
    ~Player();

    int getConstValue() const {
        return m_constValue;
    }


friend ostream& operator<<(ostream& os, Player& player);


};



#endif // PLAYER_H
