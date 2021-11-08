#include "dynamicgameentity.h"
#include "enemy.h"
#include "gameentity.h"

Enemy::Enemy(string name, Vector2 position, int lifepoints, double damagePerAttack) : GameEntity(name, position), DynamicGameEntity(name, position, lifepoints), m_damagePerAttack(damagePerAttack){


}
Enemy::~Enemy(){

}

ostream& operator<<(ostream& os, Enemy& enemy){

    os << "[" << enemy.m_lifepoints << ", " << enemy.m_damagePerAttack << "]";
    return os;
}
