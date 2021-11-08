#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <string>
using namespace std;

struct Vector2 {
    double x, y;
};

class GameEntity
{
    friend class Game;

protected:

    string m_name;
    Vector2 m_position;


public:
    GameEntity(string name, Vector2 position);

    string getName() const{
        return m_name;
    }
    Vector2 getPosition() const{
        return m_position;
    }
    void setName(string name){
        m_name = name;
    }
    void setPosition(Vector2 position){
        m_position = position;
    }
};

#endif // GAMEENTITY_H
