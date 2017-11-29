//
// Created by ezrozpi on 2017-11-29.
//

#include "Stats.h"

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

                  << " [   weapon   ]: " << player->weapon_name << " (+" << player->weapon_dmg << ")\n\n"
                  << " [    gold    ]: " << player->gold << "\n\n";
        player->printCharacter ();
        std::cout << '\n';
    }
}