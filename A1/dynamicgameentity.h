#ifndef DYNAMICGAMEENTITY_H
#define DYNAMICGAMEENTITY_H
#include "gameentity.h"

class DynamicGameEntity : public virtual GameEntity
{

protected:
    int m_lifepoints;

public:
    DynamicGameEntity(string name, Vector2 position, int lifepoints)  : GameEntity (name, position), m_lifepoints(lifepoints) {

    }
    int getLifepoints() const {
        return m_lifepoints;
    }
    void setLifepoints(int lifepoints){
        m_lifepoints= lifepoints;
    };
    void setPosition(double x, double y){
        m_position.x = x;
        m_position.y = y;
    }
};

#endif // DYNAMICGAMEENTITY_H
