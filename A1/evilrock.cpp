#include "evilrock.h"
#include "rock.h"
#include "enemy.h"

EvilRock::EvilRock(string name, Vector2 position, int lifepoints, bool isDestroyable, int sharpness, double damagePerAttak) : GameEntity(name, position), StaticGameEntity(name , position, damagePerAttak), DynamicGameEntity(name, position, lifepoints), Rock(name, position, sharpness, damagePerAttak) , Enemy(name, position, lifepoints,damagePerAttak += sharpness){




}
EvilRock::~EvilRock(){


}

