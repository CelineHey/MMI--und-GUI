#include "evilrock.h"
#include "rock.h"
#include "enemy.h"

EvilRock::EvilRock(int sharpness, double damagePerAttak) : Rock(sharpness) , Enemy(damagePerAttak += sharpness){




}

