#include "staticgameentity.h"

StaticGameEntity::StaticGameEntity(string name, Vector2 position, bool isDestroyable) : GameEntity (name, position), m_isDestroyable(isDestroyable)
{
    m_name = name;
    m_position = position;
    m_isDestroyable = isDestroyable;
}
