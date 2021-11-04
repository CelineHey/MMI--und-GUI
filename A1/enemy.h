#ifndef ENEMY_H
#define ENEMY_H
#include "dynamicgameentity"

class Enemy : public DynamicGameEntity{

private:

    double m_damagePerAttak;

public:
    Enemy(double damagePerAttak) : DynamicGameEntity(lifepoints){

    }

    double getDamagePerAttak();
    void setDamagePerAttak(double damagePerAttak);

};


#endif // ENEMY_H
