#ifndef ENEMY_H
#define ENEMY_H
#include "dynamicgameentity.h"
#include <iostream>

class Enemy : public virtual DynamicGameEntity{

    friend class game;

protected:

    double m_damagePerAttack;

public:
    Enemy( string name, Vector2 position, int lifepoints, double damagePerAttack);
    ~Enemy();

    double getDamagePerAttack(){
        return m_damagePerAttack;
    }
    void setDamagePerAttack(double damagePerAttack){
        m_damagePerAttack = damagePerAttack;
    }

friend ostream& operator<<(ostream& os, Enemy& enemy);
};

ostream& operator<<(ostream& os, Enemy& enemy);


#endif // ENEMY_H
