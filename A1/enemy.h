#ifndef ENEMY_H
#define ENEMY_H
#include "dynamicgameentity.h"

class Enemy : public virtual DynamicGameEntity{

    friend class game;

protected:

    double m_damagePerAttak;

public:
    Enemy(int lifepoints, double damagePerAttak) : DynamicGameEntity(lifepoints), m_damagePerAttak(damagePerAttak) {

    }

    double getDamagePerAttak(){
        return m_damagePerAttak;
    }
    void setDamagePerAttak(double damagePerAttak){
        m_damagePerAttak = damagePerAttak;
    }

};


#endif // ENEMY_H
