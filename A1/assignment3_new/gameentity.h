#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <string>
using namespace std;

struct Vector2 {
    double x, y;
};

Vector2 operator+(Vector2 p, Vector2 q);

class GameEntity
{
    friend class Game;

protected:

    string m_name;
    Vector2 m_position;


public:
    GameEntity(string name, Vector2 position);
    ~GameEntity();

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
