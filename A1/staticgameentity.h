#ifndef STATICGAMEENTITY_H
#define STATICGAMEENTITY_H
#include "gameentity.h"


class StaticGameEntity : public GameEntity
{

protected:
    bool m_isDestroyable;

public:
    StaticGameEntity(string name, Vector2 position, bool isDestroyable) : GameEntity (name, position), m_isDestroyable(isDestroyable){

    }
    bool getIsDestroyable() const{
        return m_isDestroyable;
    }
    void IsDestroyable(bool isDestroyable){
        m_isDestroyable = isDestroyable;
    }
};

#endif // STATICGAMEENTITY_H
