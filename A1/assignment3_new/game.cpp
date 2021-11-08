#include "game.h"
#include "gameentity.h"

using namespace std;

Vector2 Game::changePosition(GameEntity& gameentity, Vector2 position){


    Vector2 v = {position};

    return v;
}

int Game::dealDamage(Enemy& enemy, Player& player){

    int newLifepoints;

    if(player.getPosition().x != enemy.getPosition().x){
        if(player.getPosition().y != enemy.getPosition().y){
            cout << "You don't have the same position and can't fight against each other" << endl;
        }else{

            newLifepoints = player.getLifepoints() - enemy.getDamagePerAttack();

            return newLifepoints;
        }

    }


}

void Game::heal(Player &player){



}
