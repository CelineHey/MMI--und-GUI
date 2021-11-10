#ifndef DYNAMICGAMEENTITY_H
#define DYNAMICGAMEENTITY_H
#include "gameentity.h"

class DynamicGameEntity : public virtual GameEntity
{

protected:
    int m_lifepoints;

public:
    DynamicGameEntity(string name, Vector2 position, int lifepoints);
    ~DynamicGameEntity();
    int getLifepoints() const{
        return m_lifepoints;
    }
    void setLifepoints(int lifepoints){
        m_lifepoints= lifepoints;
    };

    void setPosition(double x = 0, double y=0){
        m_position.x = x;
        m_position.y = y;
    }
};

#endif // DYNAMICGAMEENTITY_H
