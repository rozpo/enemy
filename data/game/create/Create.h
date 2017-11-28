//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_CREATE_H
#define ENEMY_CREATE_H

#include <docobjectservice.h>
#include "../Game.h"

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
        map_Choices[e_create_cancel]    = "Cancel";
        map_Choices[e_create_warrior]   = "Warrior";
        map_Choices[e_create_rogue]     = "Rogue";
        map_Choices[e_create_mage]      = "Mage";
    }
};

#endif //ENEMY_CREATE_H