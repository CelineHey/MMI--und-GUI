#ifndef GAME_H
#define GAME_H
#include "gameentity.h"
#include "player.h"
#include "enemy.h"


class Game {



public:
    Vector2 changePosition(GameEntity& gameentity, Vector2 position);

    void dealDamage(Enemy& enemy, Player& player);

    void heal(Player& player);
};

#endif // GAME_H
