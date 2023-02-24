//
// Created by ezrozpi on 2017-11-16.
//

#include "Mage.h"

void Mage::printCharacter()
{
    std::cout << "      _" << '\n'
              << "     (0)*" << '\n'
              << "     /|\\|" << '\n'
              << "      | |" << '\n'
              << "     / \\|" << '\n';
}

Mage::Mage() :Player(e_player_mage,    //ID
                     "Mage",           //NAME
                     100,              //HP
                     5,                //STRENGTH
                     10,               //AGILITY
                     15)               //INTELLIGENCE
{
    skills[0] = e_move_attack;
    skills[1] = e_move_heal;
    skills[2] = e_move_firebolt;
    skills[3] = e_move_frost_nova;
    uses = {10, 10, 10 ,10};
}

Mage::~Mage()
{
    std::cout << "destroy Mage" << '\n';
}