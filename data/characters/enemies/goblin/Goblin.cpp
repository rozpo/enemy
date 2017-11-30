//
// Created by ezrozpi on 2017-11-16.
//

#include "Goblin.h"
void Goblin::printCharacter()
{
    std::cout << "      _" << '\n';
    std::cout << "     \\_/" << '\n';
    std::cout << "   |\\/|\\|" << '\n';
    std::cout << "   \\_\\| |" << '\n';
    std::cout << "     / \\" << '\n';
}

//ID EXP NAME HP STRENGTH SPEED
Goblin::Goblin():Enemy(e_enemy_goblin, 20, "Goblin", 25, 10, 10, 10, 60, 0)
{
    skills[0] = e_move_attack;
    skills[1] = e_move_attack;
    skills[2] = e_move_attack;
    skills[3] = e_move_poison;
    uses = {10, 10, 10 ,10};
}

Goblin::~Goblin()
{
    std::cout << "destroy Goblin" << '\n';
}