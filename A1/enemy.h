#ifndef ENEMY_H
#define ENEMY_H
#include "dynamicgameentity.h"

class Enemy : public virtual DynamicGameEntity{

    friend class game;

protected:

    double m_damagePerAttack;

public:
    Enemy(int lifepoints, double damagePerAttack) : DynamicGameEntity(lifepoints), m_damagePerAttack(damagePerAttack) {

    }

    double getDamagePerAttack(){
        return m_damagePerAttack;
    }
    void setDamagePerAttack(double damagePerAttack){
        m_damagePerAttack = damagePerAttack;
    }

};


#endif // ENEMY_H
