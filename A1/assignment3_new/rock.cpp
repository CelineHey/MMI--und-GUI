#include "rock.h"
#include "staticgameentity.h"

Rock::Rock(string name, Vector2 position, int sharpness, bool isDestroyable) : GameEntity(name, position), StaticGameEntity(name, position, isDestroyable), m_sharpness(sharpness){


}
Rock::~Rock(){

}
