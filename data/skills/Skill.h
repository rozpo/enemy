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

enum e_MoveType
{
    e_type_str,
    e_type_agi,
    e_type_int
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
    e_MoveType  type;

    Skill(e_Move id,std::string name,bool target,int damage,int chance,int critical, e_MoveType type);
    ~Skill();
    static std::vector<std::shared_ptr<Skill>> createSkills(std::vector<std::shared_ptr<Skill>> &skills);
    //static void openTutor(std::vector<Skill*> moves);
    //static void printTutorChoice();
    //static void printMoves(std::vector<Skill*> moves);
    static std::string printType(e_MoveType type);
    static void printSkills(const std::vector<std::shared_ptr<Skill>> &skills);
};


#endif //ENEMY_SKILL_H
