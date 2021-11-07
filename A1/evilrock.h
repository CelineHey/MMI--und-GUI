#ifndef EVILROCK_H
#define EVILROCK_H
#include "rock.h"
#include "enemy.h"
#include "gameentity.h"
#include "staticgameentity.h"
#include "dynamicgameentity.h"

class EvilRock : public Rock, public Enemy{

public:

    EvilRock(string name, Vector2 position, int lifepoints, bool isDestroyable, int sharpness, double damagePerAttak) : GameEntity(name, position), StaticGameEntity(isDestroyable) , DynamicGameEntity(lifepoints),  Rock(sharpness) , Enemy(damagePerAttak += sharpness){

    }
};

#endif // EVILROCK_H
