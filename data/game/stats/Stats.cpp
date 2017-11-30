//
// Created by ezrozpi on 2017-11-29.
//

#include "Stats.h"
#include <iomanip>


void Stats::print(const std::shared_ptr<Player> &player)
{
    if(player != nullptr)
    {
        std::cout << '\n'
                  << " [    name    ]: " << player->name << '\n'
                  << " [   level    ]: " << player->level << '\n'
                  << " [    exp     ]: " << player->experience << "\n"
                  << " [level points]: " << player->level_points << "\n\n"

                  << " [   health   ]: " << player->hitpoints << "/" << player->max_hitpoints << '\n'
                  << " [  strength  ]: " << player->strength << '\n'
                  << " [  agility   ]: " << player->agility << "\n"
                  << " [intelligence]: " << player->intelligence << "\n\n"

                  << " [   weapon   ]: " << player->weapon_name << " (+" << player->weapon_dmg << ")\n"
                  << " [    gold    ]: " << player->gold << "\n\n"
                  << player->name << " killed " << player->win << " enemies\nAnd lost " << player->lost << " times\n";
        player->printCharacter ();
        std::cout << '\n';
    }
}

void Stats::printMoves(const std::shared_ptr<Player> &player, const std::vector<std::shared_ptr<Skill>> &skills)
{
    int n = 4;
    for(int i = 0; i < n; i++)
    {
        std::cout << "("
                  << std::setw(2)
                  << player->uses[i]
                  << "/10) ";
        for(int j = 0; j < skills.size (); j++)
        {
            if (player->skills[ i ] == skills[ j ]->id)
            {
                std::cout << skills[ j ]->name << "\n";
            }
        }
    }
}