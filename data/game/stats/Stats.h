//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_STATS_H
#define ENEMY_STATS_H

#include "../../characters/players/Player.h"
#include "../Game.h"

class Stats: public Game
{
public:
    void print(const std::shared_ptr<Player> &player);
};

#endif //ENEMY_STATS_H