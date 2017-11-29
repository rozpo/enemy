//
// Created by ezrozpi on 2017-11-16.
//

#include "Warrior.h"

void Warrior::printCharacter()
{
    std::cout << "     |_|" << '\n'
              << "     [_] /" << '\n'
              << "    /\\|\\/_" << '\n'
              << "    \\/|/" << '\n'
              << "     / \\" << '\n';
}

Warrior::Warrior() :Player(e_player_warrior,    //ID
                           "Warrior",           //NAME
                           100,                 //HP
                           15,                  //STRENGTH
                           10,                  //AGILITY
                           5)                   //INTELLIGENCE
{
    skills[0] = e_move_attack;
    skills[1] = e_move_power_attack;
    skills[2] = e_move_bash;
    skills[3] = e_move_heal;
}

Warrior::~Warrior()
{
    std::cout << "destroy Warrior" << '\n';
}