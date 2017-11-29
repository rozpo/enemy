//
// Created by ezrozpi on 2017-11-23.
//

#include "Battle.h"
//==================================================

void Battle::levelupPlayer(std::shared_ptr<Player> &player)
{
    player->level++;
    player->level_points=+5;

    player->hitpoints+=5;
    player->max_hitpoints+=5;

    player->strength+=1;
    player->agility+=1;
    player->intelligence+=1;

    std::cout << "  !LEVEL UP!\n"
              << "  hitpoints "     << player->max_hitpoints << "\n"
              << "  strength "      << player->strength << "\n"
              << "  agility "       << player->agility << "\n"
              << "  intelligence "  << player->intelligence << "\n"
              << "  level points "  << player->level_points << "\n";
}
//==================================================

void Battle::endBattle(std::shared_ptr<Player> &player,
                       std::shared_ptr<Enemy> &enemy)
{
    if (player->hitpoints >= 0)
    {
        std::cout << "\n [ You win! ] \n"
                  << " Experience: +"
                  << enemy->get_exp << '\n'
                  << " Gold: +"
                  << enemy->gold
                  << "\n";
        player->gold += enemy->gold;
        player->experience += enemy->get_exp;
        if(player->experience >= player->level*100)
            levelupPlayer (player);
    }
    else
        std::cout << "\n [ You lose! ] \n";
}
//==================================================

void Battle::doBattle(std::shared_ptr<Player> &player,
                      std::shared_ptr<Enemy> &enemy,
                      const std::vector<std::shared_ptr<Skill>> &skills)
{
    if(player->hitpoints > 0)
    {
        int x;
        do
        {
            printBattle(player, enemy);
            printMoves(player, skills);
            std::cin >> x;
            if (x == 1 || x == 2 || x == 3 || x == 4)
            {
                calculateDamage(player, enemy, x - 1, skills);
                x = (std::rand () % 3)+1;
                calculateDamage(enemy, player, x - 1, skills);
            }
        } while(player->hitpoints > 0 && enemy->hitpoints > 0);
        endBattle (player,enemy);
    }
    else
        std::cout << player->name << " cant fight!\n";

}
//==================================================

template <typename T1, typename T2>
void Battle::calculateDamage(std::shared_ptr<T1> &user,
                             std::shared_ptr<T2> &target,
                             int x,
                             const std::vector<std::shared_ptr<Skill>> &skills)
{
    int dmg = 0;
    std::cout << '\n';
    for(int i = 0; i<skills.size(); i++)
    {
        if(user->skills[x] == skills[i]->id)
        {
            if(skills[i]->chance >= ((std::rand () % 100)+1))
            {
                dmg = user->weapon_dmg + ((std::rand () % skills[i]->damage)+1)+(characterDamage(user, skills[i]->type));
                if(skills[i]->critical >= ((std::rand () % 100)+1))
                {
                    dmg *= 2;
                    if(! skills[i]->target)
                        target->hitpoints -= dmg;
                    else
                    {
                        user->hitpoints += dmg;
                        if(user->hitpoints > user->max_hitpoints)
                            user->hitpoints = user->max_hitpoints;
                    }
                    std::cout << user->name<< " using " << skills[i]->name << " " << dmg << "HP CRITICAL HIT!";
                }
                else
                {
                    if(! skills[i]->target)
                        target->hitpoints -= dmg;
                    else
                    {
                        user->hitpoints += dmg;
                        if(user->hitpoints > user->max_hitpoints)
                            user->hitpoints = user->max_hitpoints;
                    }
                    std::cout << user->name<< " using " << skills[i]->name << " " << dmg << "HP";
                }
                std::cout << '\n';
            }
            else
                std::cout << user->name<< " miss! " << skills[i]->name << '\n';
        }
    }
}
//==================================================

void Battle::printBattle(const std::shared_ptr<Player> &player, const std::shared_ptr<Enemy> &enemy)
{
    std::cout << "------------------------------------" << '\n';
    std::cout << enemy->name << '\n';
    std::cout << enemy->hitpoints << "|" << enemy->max_hitpoints << '\n';
    enemy->printCharacter ();
    std::cout << '\n';
    std::cout << '\n';
    player->printCharacter ();
    std::cout << player->name << '\n';
    std::cout << player->hitpoints << "|" << player->max_hitpoints << '\n';
    std::cout << "-------------" << '\n';
}
//==================================================

void Battle::printMoves(const std::shared_ptr<Player> &player, const std::vector<std::shared_ptr<Skill>> &skills)
{
    int n = 4;
    for(int i = 0; i < n; i++)
    {
        std::cout << "[" <<i+1<<"]: ";
        for(int j = 0; j < skills.size (); j++)
        {
            if (player->skills[ i ] == skills[ j ]->id)
            {
                std::cout << skills[ j ]->name << " ";
                if (! skills[ j ]->target)
                {
                    std::cout << "enemy (-";
                    std::cout << skills[j]->damage << "hp)\n";
                }
                else
                {
                    std::cout << "yourself (+";
                    std::cout << skills[j]->damage << "hp)\n";
                }
            }
        }
    }
    std::cout << "\n[>]: ";
}
//==================================================

template <typename T1>
int Battle::characterDamage(const std::shared_ptr<T1> &user, int type)
{
    switch(type)
    {
        case e_type_str:
            return user->strength;
        case e_type_agi:
            return user->agility;
        case e_type_int:
            return user->intelligence;
    }
}
//==================================================

std::vector<std::shared_ptr<Enemy>> Battle::createEnemy(std::vector<std::shared_ptr<Enemy>> enemies)
{
    int x = (std::rand () % 3);
    enemies.push_back (Factory::getInstance ().createEnemy (x));
    return enemies;
}