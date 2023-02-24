//
// Created by ezrozpi on 2017-11-16.
//

#include "Orc.h"

void Orc::printCharacter()
{
    std::cout << "      _" << '\n';
    std::cout << "     )_(" << '\n';
    std::cout << "   C|/|\\|D" << '\n';
    std::cout << "    | | |" << '\n';
    std::cout << "     / \\" << '\n';
}

//ID EXP NAME HP STRENGTH SPEED
Orc::Orc():Enemy(e_enemy_orc, 40, "Orc", 50, 15, 10, 5, 20, 0)
{
    skills[0] = e_move_attack;
    skills[1] = e_move_attack;
    skills[2] = e_move_throw;
    skills[3] = e_move_power_attack;
    uses = {10, 10, 10 ,10};
}

Orc::~Orc()
{
    std::cout << "destroy Warrior" << '\n';
}