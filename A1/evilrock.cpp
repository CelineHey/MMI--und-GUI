#ifndef EVILROCK_H
#define EVILROCK_H

#include "rock.h"
#include "enemy.h"

EvilRock::EvilRock(int sharpness, double damagePerAttak) : Rock(sharpness) : Enemy(damagePerAttak += sharpness){




}

#endif // EVILROCK_H
