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
    void printMoves(const std::shared_ptr<Player> &player, const std::vector<std::shared_ptr<Skill>> &skills);
};

#endif //ENEMY_STATS_H