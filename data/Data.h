//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_DATA_H
#define ENEMY_DATA_H

#include <vector>
#include "characters/players/Player.h"
#include "characters/enemies/Enemy.h"

class Data
{
public:
    std::vector<std::shared_ptr<Player>> players;
    std::vector<std::shared_ptr<Enemy>> enemies;
    std::vector<std::shared_ptr<Skill>> skills;
    int activeplayer;
};

#endif //ENEMY_DATA_H