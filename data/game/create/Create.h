//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_CREATE_H
#define ENEMY_CREATE_H

#include <docobjectservice.h>
#include "../Game.h"
#include "../../characters/players/Player.h"
#include "../../characters/Character.h"
#include "../../factory/Factory.h"

enum e_Create
{
    e_create_cancel,
    e_create_warrior,
    e_create_rogue,
    e_create_mage
};

class Create: public Game
{
public:
    Create()
    {
        name = "[N] New Character";
        map_Choices[e_create_cancel]    = "Cancel";
        map_Choices[e_create_warrior]   = "Warrior";
        map_Choices[e_create_rogue]     = "Rogue";
        map_Choices[e_create_mage]      = "Mage";
    }

    std::vector<std::shared_ptr<Player>> createPlayer(std::vector<std::shared_ptr<Player>> &players, int &status)
    {
        if (players.size () < 5)
        {
                if( status ==1 || status ==2 || status ==3)
                {
                    players.push_back (Factory::getInstance().createPlayer(status));
                    return players;
                }
                else
                    return players;
        }
        else
        {
            std::cout << "Characters limit" << "\n";
            return players;
        }
    }
};

#endif //ENEMY_CREATE_H