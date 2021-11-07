#ifndef PLAYER_H
#define PLAYER_H
#include "dynamicgameentity.h"

class Player : public DynamicGameEntity{

    friend class game;

private:
    int const constValue;

public:
    Player(int const constValue, int lifepoints ) : DynamicGameEntity(lifepoints), constValue(constValue) {

    }

    int getConstValue() const {
        return m_constValue;
    }

    void setConstValue(int const constValue){
        m_constValue = constValue;
    }

    void setnewLifepoints(int lifepoints, int const constValue){
        m_lifepoints + m_constValue = newLifepoints;


};

#endif // PLAYER_H
