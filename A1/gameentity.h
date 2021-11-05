#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <string>
using namespace std;


class GameEntity
{

protected:
    struct Vector2 {
        double x, y;
    };
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
};

#endif // GAMEENTITY_H
