//
// Created by ezrozpi on 2017-11-16.
//

#include "Rogue.h"

void Rogue::printCharacter()
{
    std::cout << "      _" << '\n';
    std::cout << "     /_\\" << '\n';
    std::cout << "    \\/|\\/" << '\n';
    std::cout << "      |" << '\n';
    std::cout << "     / \\" << '\n';
}

//ID NAME HP STRENGTH SPEED
Rogue::Rogue() :Player(e_player_rogue,    //ID
                       "Rogue",           //NAME
                       100,               //HP
                       10,                //STRENGTH
                       10,                //AGILITY
                       10)                //INTELLIGENCE
{
    skills[0] = e_move_attack;
    skills[1] = e_move_throw;
    skills[2] = e_move_poison;
    skills[3] = e_move_heal;
}

Rogue::~Rogue()
{
    std::cout << "destroy Rogue" << '\n';
}