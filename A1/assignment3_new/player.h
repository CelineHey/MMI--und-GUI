#ifndef PLAYER_H
#define PLAYER_H
#include "dynamicgameentity.h"

class Player : public DynamicGameEntity{

private:
    int const m_constValue;

public:
    Player(int const constValue, int lifepoints );

    int getConstValue() const {
        return m_constValue;
    }




};

#endif // PLAYER_H
