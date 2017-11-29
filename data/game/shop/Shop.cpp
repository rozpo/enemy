//
// Created by ezrozpi on 2017-11-23.
//

#include "Shop.h"

//==================================================

void Shop::openShop(std::shared_ptr<Player> &player)
{
    int x;
    int heal_cost;
    while(true)
    {
        heal_cost = player->max_hitpoints-player->hitpoints;
        if(heal_cost > player->gold)
            heal_cost = player->gold;

        print(player->gold, heal_cost);
        std::cin >> x;
        switch(x)
        {
            case e_shop_heal:
            {
                if(player->gold >= heal_cost)
                {
                    if(player->hitpoints > 0)
                    {
                        player->hitpoints += heal_cost;
                        player->gold-=heal_cost;
                        std::cout << player->name << " is now healthy\n";
                    }
                    else
                    {
                        std::cout << "You can heal only live characters\n";
                    }
                }
                else
                {
                    std::cout << "You dont have enough money \n";
                }
            }
                break;
            case e_shop_revive:
            {
                if(player->gold >= 100)
                {
                    if(player->hitpoints <= 0)
                    {
                        player->hitpoints = player->max_hitpoints;
                        player->gold-=100;
                        std::cout << player->name << " is now resurrected\n";
                    }
                    else
                    {
                        std::cout << "You can revive only dead characters\n";
                    }
                }
                else
                {
                    std::cout << "You dont have enough money \n";
                }
            }
                break;
            case e_shop_add_hitpoints:
            {
                if(player->gold >= 75)
                {
                    player->max_hitpoints += 10;
                    player->hitpoints += 10;
                    player->gold-=75;
                    std::cout << player->name << " max hitpoints is now " << player->max_hitpoints << "\n";
                }
                else
                {
                    std::cout << "You dont have enough money \n";
                }
            }
                break;
            case e_shop_add_strength:
            {
                if(player->gold >= 50)
                {
                    player->strength += 2;
                    player->gold-=50;
                    std::cout << player->name << " strength is now " << player->strength << "\n";
                }
                else
                {
                    std::cout << "You dont have enough money \n";
                }
            }
                break;
            case e_shop_add_agility:
            {
                if(player->gold >= 50)
                {
                    player->agility += 2;
                    player->gold-=50;
                    std::cout << player->name << " agility is now " << player->agility << "\n";
                }
                else
                {
                    std::cout << "You dont have enough money \n";
                }
            }
                break;

            case e_shop_add_intelligence:
            {
                if(player->gold >= 50)
                {
                    player->intelligence += 2;
                    player->gold-=50;
                    std::cout << player->name << " intelligence is now " << player->intelligence << "\n";
                }
                else
                {
                    std::cout << "You dont have enough money \n";
                }
            }
                break;
            default:
                return;
        }
    }
}