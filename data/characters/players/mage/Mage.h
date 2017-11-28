//
// Created by ezrozpi on 2017-11-16.
//

#ifndef GAME_MAGE_H
#define GAME_MAGE_H

#include "../Player.h"

class Mage: public Player
{
public:
    Mage();
    ~Mage();
    void printCharacter() override ;
};

#endif //GAME_MAGE_H