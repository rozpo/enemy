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

    void print(const std::vector<std::shared_ptr<Player>> &players)
    {
        if (players.empty () == 0)
        {
            std::cout << "---\n"
                      << name << "\n\n";
            for ( int i = 0 ; i < players.size () ; i ++ )
                std::cout << "[" << i + 1 << "]: " << players[ i ]->name << '\n';
            std::cout << '\n' << "---\n" << "[0]: " << this->map_Choices[0] << '\n';
        }
    }

    int selectPlayer(const int status)
    {

        return status-1;
    }
};

#endif //ENEMY_SELECT_H