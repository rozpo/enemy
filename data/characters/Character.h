//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_CHARACTER_H
#define ENEMY_CHARACTER_H

#include <iostream>
#include <array>
#include <utility>
#include "../skills/Skill.h"

class Character
{
public:

        int                     hitpoints;
        int                     max_hitpoints;
        int                     strength;
        int                     agility;
        int                     intelligence;
        std::array<e_Move, 4>   skills{};
        std::array<int, 4>      uses{};
        int                     gold;

    std::string             name;

    std::string weapon_name;
    int         weapon_dmg;

        Character(std::string c_name,
                  int c_hitpoints,
                  int c_max_hitpoints,
                  int c_strength,
                  int c_agility,
                  int c_intelligence,
                  int c_gold,
                  int c_weapon);

        virtual         ~Character();
        virtual void    printCharacter() = 0;
        std::string showName()
        {
            return name;
        }
};

#endif //ENEMY_CHARACTER_H