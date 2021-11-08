#include "evilrock.h"
#include "rock.h"
#include "enemy.h"

EvilRock::EvilRock(string name, Vector2 position, int lifepoints, bool isDestroyable, int sharpness, double damagePerAttak) : GameEntity(name, position), Rock(sharpness) , Enemy(damagePerAttak += sharpness){




}

