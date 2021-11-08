#include "tree.h"
#include "staticgameentity.h"


Tree::Tree(string name, Vector2 position,bool isDestroyable) : GameEntity(name, position), StaticGameEntity(name, position, isDestroyable){


}
Tree::~Tree(){


}
