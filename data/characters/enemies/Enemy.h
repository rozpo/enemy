//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_ENEMY_H
#define ENEMY_ENEMY_H

#include "../Character.h"

enum e_Enemy
{
    e_enemy_orc,
    e_enemy_goblin,
    e_enemy_warlock
};

class Enemy: public Character
{
public:
    e_Enemy id;
    int get_exp;

    Enemy(e_Enemy id_enemy,int exp, std::string name, int hitpoints, int strenght,int agility, int intelligence, int e_gold, int weapon);
    virtual ~Enemy();
};


#endif //ENEMY_ENEMY_H
