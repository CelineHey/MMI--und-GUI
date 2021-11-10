#include "player.h"
#include "dynamicgameentity.h"

using namespace std;

Player::Player(string name, Vector2 position,int const constValue, int lifepoints) : GameEntity(name, position), DynamicGameEntity(name, position,lifepoints += constValue), m_constValue(constValue){

}
Player::~Player(){

}

ostream& operator<<(ostream& os, Player& player){
    os << "[" << player.m_constValue << ", " << player.m_lifepoints << "]";
    return os;
}
