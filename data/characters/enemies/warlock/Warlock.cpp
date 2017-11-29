//
// Created by ezrozpi on 2017-11-16.
//

#include "Warlock.h"

void Warlock::printCharacter()
{
    std::cout << "      _" << '\n'
              << "    @(O)" << '\n'
              << "    |/|\\" << '\n'
              << "    | |" << '\n'
              << "    |/ \\" << '\n';
}

//ID EXP NAME HP STRENGTH SPEED
Warlock::Warlock():Enemy(e_enemy_warlock, 60, "Warlock", 100, 5, 10, 15, 40, 0)
{
    skills[0] = e_move_attack;
    skills[1] = e_move_attack;
    skills[2] = e_move_heal;
    skills[3] = e_move_firebolt;
}

Warlock::~Warlock()
{
    std::cout << "destroy Warlock" << '\n';
}