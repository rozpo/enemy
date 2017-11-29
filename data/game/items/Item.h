//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_ITEM_H
#define ENEMY_ITEM_H

#include "../Game.h"

enum e_Item
{
    e_item_cancel,
    e_item_dagger,
    e_item_shortsword,
    e_item_greataxe,
    e_item_heavyhammer,
    e_item_devilscythe
};

class Item: public Game
{
public:
    Item()
    {
        name                            = "[I] Item Shop";
        map_Choices[e_item_cancel]      = "Cancel";
        map_Choices[e_item_dagger]      = "( 50 gp) + 5 dagger";
        map_Choices[e_item_shortsword]  = "(120 gp) +10 short sword";
        map_Choices[e_item_greataxe]    = "(299 gp) +19 great axe";
        map_Choices[e_item_heavyhammer] = "(420 gp) +35 heavy hammer";
        map_Choices[e_item_devilscythe] = "(666 gp) +666 Legendary Lucifer's Scythe ";
    }

    void openItem(std::shared_ptr<Player> &player)
    {
        int z = 0;
        do
        {
            print();

            std::cout << player->name << " current weapon ( ";
            if(player->weapon_dmg != 0)
                std::cout << player->weapon_name << " )\n";
            else
                std::cout << "None )\n";

            z = choice();
            switch(z)
            {
                case e_item_dagger:
                {
                    if(player->gold >= 50)
                    {
                        player->weapon_name = "Dagger";
                        player->weapon_dmg = 5;
                    }
                    else
                        std::cout << "Not enough gold ;(\n";
                }
                    break;

                case e_item_shortsword:
                {
                    if(player->gold >= 120)
                    {
                        player->weapon_name = "Short Sword";
                        player->weapon_dmg = 10;
                    }
                    else
                        std::cout << "Not enough gold ;(\n";
                }
                    break;

                case e_item_greataxe:
                {
                    if(player->gold >= 299)
                    {
                        player->weapon_name = "Great Axe";
                        player->weapon_dmg = 19;
                    }
                    else
                        std::cout << "Not enough gold ;(\n";
                }
                    break;

                case e_item_heavyhammer:
                {
                    if(player->gold >= 420)
                    {
                        player->weapon_name = "Heavy Hammer";
                        player->weapon_dmg = 35;
                    }
                    else
                        std::cout << "Not enough gold ;(\n";
                }
                    break;

                case e_item_devilscythe:
                {
                    if(player->gold >= 666)
                    {
                        player->weapon_name = "Legendary Lucifer's Scythe";
                        player->weapon_dmg = 666;
                    }
                    else
                        std::cout << "Not enough gold ;(\n";
                }
                    break;
            }
        }while(z != 0);
    }
};


#endif //ENEMY_ITEM_H
