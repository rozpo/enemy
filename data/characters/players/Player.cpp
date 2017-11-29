//
// Created by ezrozpi on 2017-11-20.
//

#include "Player.h"

Player::~Player()
{
    std::cout << "destroy Player" << '\n';
}

Player::Player(e_Player p_id,
               std::string p_name,
               int p_hitpoints,
               int p_strength,
               int p_agility,
               int p_intelligence):

                    id(p_id),
                    level(1),
                    experience(0),
                    level_points(0),

                    Character(std::move (p_name),
                              p_hitpoints,
                              p_hitpoints,
                              p_strength,
                              p_agility,
                              p_intelligence,
                              10001
                            ,0)
{}