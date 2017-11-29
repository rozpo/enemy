//
// Created by ezrozpi on 2017-11-20.
//

#include "Skill.h"
#include <iomanip>
#include <iostream>

Skill::Skill(e_Move id,std::string name,bool target,int damage,int chance,int critical, e_MoveType type):
        id(id),name(std::move (name)),target(target),damage(damage),chance(chance),critical(critical), type(type)
{}

Skill::~Skill()
{
    std::cout << "Destroy Skill\n";
}

std::vector<std::shared_ptr<Skill>> Skill::createSkills(std::vector<std::shared_ptr<Skill>> &skills)
{
    //ID, NAME, TARGET, DAMAGE, CHANCE, CRITICAL, TYPE
    //All
    skills.push_back (std::make_shared<Skill>(e_move_attack,"Fast attack",false,20,90,10,e_type_str));
    skills.push_back (std::make_shared<Skill>(e_move_heal,"Heal",true,50,100,20,e_type_int));

    //Warrior
    skills.push_back (std::make_shared<Skill>(e_move_power_attack,"Powerful swing",false,40,70,25,e_type_str));
    skills.push_back (std::make_shared<Skill>(e_move_bash,"Shield bash",false,30,50,30,e_type_str));

    //Rogue
    skills.push_back (std::make_shared<Skill>(e_move_throw,"Throw knife",false,30,85,75,e_type_agi));
    skills.push_back (std::make_shared<Skill>(e_move_poison,"Spread poison",false,40,75,40,e_type_agi));

    //Mage
    skills.push_back (std::make_shared<Skill>(e_move_firebolt,"Throw firebolt",false,100,65,5,e_type_int));
    skills.push_back (std::make_shared<Skill>(e_move_frost_nova,"Cast frost nova",false,50,75,50,e_type_int));

    return skills;
}

void Skill::printSkills(const std::vector<std::shared_ptr<Skill>> &skills)
{
    std::cout << "\n (ID)\t(DMG)\t(TYPE)\t(ACCU)\t(CRIT)\t(NAME)\n";
    for(int i=0; i < skills.size (); i++)
    {
        std::cout << " [" << std::setw(1) << skills.at(i)->id+1 << "]\t"
                  << "[" << std::setw(3) << skills.at(i)->damage << "]\t"
                  << "[" << std::setw(4) << printType(skills.at(i)->type) << "]\t"
                  << "[" << std::setw(3) << skills.at(i)->chance << "%]\t"
                  << "[" << std::setw(3) << skills.at(i)->critical << "%]\t"
                  << "" << skills.at (i)->name << "\n";
    }
}

std::string Skill::printType(e_MoveType type)
{
    switch(type)
    {
        case e_type_str:
            return "STRE";
        case e_type_agi:
            return "AGIL";
        case e_type_int:
            return "INTE";
    }
}