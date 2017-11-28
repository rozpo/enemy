//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_SKILL_H
#define ENEMY_SKILL_H

enum e_Move
{
    e_move_attack,
    e_move_heal,
    e_move_throw,
    e_move_poison,
    e_move_power_attack,
    e_move_bash,
    e_move_firebolt,
    e_move_frost_nova
};

//#include "characters/Character.h"
#include <vector>
#include <memory>
//#include "characters/players/Player.h"

class Skill
{
public:
    e_Move      id;
    std::string name;
    int         damage;
    bool        target;
    int         chance;
    int         critical;
    Skill(e_Move id,std::string name,bool target,int damage,int chance,int critical);
    ~Skill();
    static std::vector<Skill*> createMoves(std::vector<Skill*> moves);
    //static void openTutor(std::vector<Skill*> moves);
   // static void printTutorChoice();
    //static void printMoves(std::vector<Skill*> moves);
};


#endif //ENEMY_SKILL_H
