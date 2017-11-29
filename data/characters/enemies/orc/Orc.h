//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_ORC_H
#define ENEMY_ORC_H

#include "../Enemy.h"

class Orc: public Enemy
{
public:
    Orc();
    ~Orc();
    void printCharacter() override ;
};


#endif //ENEMY_ORC_H
