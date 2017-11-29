//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_WARLOCK_H
#define ENEMY_WARLOCK_H

#include "../Enemy.h"

class Warlock: public Enemy
{
public:
    Warlock();
    ~Warlock();
    void printCharacter() override ;
};


#endif //ENEMY_WARLOCK_H
