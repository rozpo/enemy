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
private:
        std::string             name;
        int                     hitpoints;
        int                     max_hitpoints;
        int                     strength;
        int                     agility;
        int                     intelligence;
protected:
        std::array<e_Move,4>    skills{};
        int                     gold;
public:
        Character(std::string c_name,
                  int c_hitpoints,
                  int c_max_hitpoints,
                  int c_strength,
                  int c_agility,
                  int c_intelligence,
                  int c_gold);

        virtual         ~Character();
        virtual void    printCharacter() = 0;
};

#endif //ENEMY_CHARACTER_H