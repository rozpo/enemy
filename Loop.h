//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_LOOP_H
#define ENEMY_LOOP_H

#include "data/Data.h"
#include "data/game/menu/Menu.h"
#include "data/game/create/Create.h"
#include "data/game/select/Select.h"
#include "data/game/stats/Stats.h"
#include "data/game/battle/Battle.h"
#include "data/game/shop/Shop.h"
#include "data/game/training/Training.h"
#include "data/game/items/Item.h"

enum e_Loop
{
    e_loop_cancel,
    e_loop_create,
    e_loop_select,
    e_loop_stats,
    e_loop_battle,
    e_loop_shop,
    e_loop_training,
    e_loop_items,
    e_loop_skills
};

class Loop
{
public:
    int set;
    int status;
    void mainLoop();
};

#endif //ENEMY_LOOP_H