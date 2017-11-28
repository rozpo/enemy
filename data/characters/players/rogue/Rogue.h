//
// Created by ezrozpi on 2017-11-16.
//

#ifndef GAME_ROGUE_H
#define GAME_ROGUE_H

#include "../Player.h"

class Rogue: public Player
{
public:
    Rogue();
    ~Rogue();
    void printCharacter() override ;
};

#endif //GAME_ROGUE_H