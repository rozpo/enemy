//
// Created by ezrozpi on 2017-11-29.
//

#include "Item.h"

void Item::openItem(std::shared_ptr<Player> &player)
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