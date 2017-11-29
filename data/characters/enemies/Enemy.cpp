//
// Created by ezrozpi on 2017-11-22.
//

#include "Enemy.h"

Enemy::~Enemy()
{
    std::cout << "destroy Enemy" << '\n';
}

Enemy::Enemy(e_Enemy id_enemy,int exp, std::string name, int hitpoints, int strenght,int agility, int intelligence, int e_gold, int weapon):
        id(id_enemy),get_exp(exp),Character(name,hitpoints,hitpoints,strenght,agility, intelligence, e_gold, weapon)
{}