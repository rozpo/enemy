//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_GOBLIN_H
#define ENEMY_GOBLIN_H

#include "../Enemy.h"

class Goblin: public Enemy
{
public:
    Goblin();
    ~Goblin();
    void printCharacter() override ;
};


#endif //ENEMY_GOBLIN_H
