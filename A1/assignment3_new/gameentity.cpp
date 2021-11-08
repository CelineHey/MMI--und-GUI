#include "gameentity.h"

Vector2 operator+(Vector2 p, Vector2 q){
    Vector2 newPosition;
    newPosition.x = p.x + q.y;
    newPosition.y = p.y + q.y;
    return newPosition;

}
GameEntity::GameEntity(string name, Vector2 position) : m_name(name), m_position(position){

}

GameEntity:: ~ GameEntity(){

}
