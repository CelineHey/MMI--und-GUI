#ifndef EVILROCK_H
#define EVILROCK_H

class EvilRock : public Rock, public Enemy{

public:

    EvilRock(int sharpness, double damagePerAttak) : Rock(sharpness) : Enemy(damagePerAttak += sharpness){

    }
};

#endif // EVILROCK_H
