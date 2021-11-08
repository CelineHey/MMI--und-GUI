#include "dynamicgameentity.h"
#include "gameentity.h"

DynamicGameEntity::DynamicGameEntity(string name, Vector2 position, int lifepoints) : GameEntity(name, position), m_lifepoints(lifepoints) {

}

