#ifndef TREE_H
#define TREE_H
#include "staticgameentity.h"
#include <iostream>

class Tree : public StaticGameEntity {

public:
    Tree(bool isDestroyable): StaticGameEntity (isDestroyable){

    }

};

#endif // TREE_H
