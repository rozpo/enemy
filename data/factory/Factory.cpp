//
// Created by ezrozpi on 2017-11-16.
//

#include "Factory.h"
#include "../characters/players/warrior/Warrior.h"
#include "../characters/players/rogue/Rogue.h"
#include "../characters/players/mage/Mage.h"
#include "../characters/enemies/orc/Orc.h"
#include "../characters/enemies/goblin/Goblin.h"
#include "../characters/enemies/warlock/Warlock.h"

Factory& Factory::getInstance()
{
    static Factory instance;
    return instance;
}

std::shared_ptr<Player> Factory::createPlayer(int type)
{
    switch(type)
    {
        case e_player_warrior:
            return std::make_shared<Warrior>();
        case e_player_rogue:
            return std::make_shared<Rogue>();
        case e_player_mage:
            return std::make_shared<Mage>();
        default:
            return nullptr;
    }
}

std::shared_ptr<Enemy> Factory::createEnemy(int type)
{
    switch(type)
    {
        case e_enemy_orc:
            return std::make_shared<Orc>();
        case e_enemy_goblin:
            return std::make_shared<Goblin>();
        case e_enemy_warlock:
            return std::make_shared<Warlock>();
        default:
            return nullptr;
    }
}