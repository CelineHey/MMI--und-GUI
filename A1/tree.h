#ifndef TREE_H
#define TREE_H
#include "staticgameentity.h"
#include <iostream>

class Tree : public  StaticGameEntity {

public:
    Tree(string name, Vector2 position, bool isDestroyable);
    ~Tree();

};

#endif // TREE_H
