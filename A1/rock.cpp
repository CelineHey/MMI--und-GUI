#include "rock.h"
#include "staticgameentity.h"

Rock::Rock(int sharpness, bool isDestroyable) : StaticGameEntity(isDestroyable){

    m_sharpness = sharpness
}
