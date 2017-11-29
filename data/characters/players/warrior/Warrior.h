//
// Created by ezrozpi on 2017-11-16.
//

#ifndef ENEMY_WARRIOR_H
#define ENEMY_WARRIOR_H

#include "../Player.h"

class Warrior: public Player
{
public:
    Warrior();
    ~Warrior();
    void printCharacter() override ;
};


#endif //ENEMY_WARRIOR_H
