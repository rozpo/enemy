//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_SELECT_H
#define ENEMY_SELECT_H

#include "../Game.h"
#include "../../characters/players/Player.h"

enum e_Select
{
    e_select_cancel,
};

class Select: public Game
{
public:
    Select()
    {
        name = "[S] Character Select";
        map_Choices[e_select_cancel]    = "Cancel";
    }

    void print(const std::vector<std::shared_ptr<Player>> &players);
    int selectPlayer(const int status);
};

#endif //ENEMY_SELECT_H