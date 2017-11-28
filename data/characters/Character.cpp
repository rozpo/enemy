//
// Created by ezrozpi on 2017-11-20.
//

#include "Character.h"

Character::Character(std::string c_name,
                     int c_hitpoints,
                     int c_max_hitpoints,
                     int c_strength,
                     int c_agility,
                     int c_intelligence,
                     int c_gold):
        name(std::move(c_name)),
        hitpoints(c_hitpoints),
        max_hitpoints(c_max_hitpoints),
        strength(c_strength),
        agility(c_agility),
        intelligence(c_intelligence),
        gold(c_gold)
{}

Character::~Character()
{
    std::cout << "destroy Character" << '\n';
}