#include "dynamicgameentity.h"

DynamicGameEntity::DynamicGameEntity(string name, Vector2 position, int lifepoints) : GameEntity(name, position), m_lifepoints(lifepoints)
{
    m_name = name;
    m_position = position;
    m_lifepoints = lifepoints;
}
