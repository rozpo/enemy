//
// Created by ezrozpi on 2017-11-16.
//

#ifndef ENEMY_PLAYER_H
#define ENEMY_PLAYER_H

#include "../Character.h"

enum e_Player
{
    e_player_cancel,
    e_player_warrior,
    e_player_rogue,
    e_player_mage
};

class Player: public Character
{
public:
    e_Player    id;
    int         level;
    int         experience;
    int         level_points;
    int         win;
    int         lost;

    Player(e_Player p_id,
           std::string p_name,
           int p_hitpoints,
           int p_strenght,
           int p_agility,
           int p_intelligence);

    virtual ~Player();
};

#endif //ENEMY_PLAYER_H