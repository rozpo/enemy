//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_SHOP_H
#define ENEMY_SHOP_H

#include "../Game.h"
#include <iostream>
#include <iomanip>

enum e_Shop
{
    e_shop_cancel,
    e_shop_heal,
    e_shop_revive,
    e_shop_add_hitpoints,
    e_shop_add_strength,
    e_shop_add_agility,
    e_shop_add_intelligence
};

class Shop: public Game
{
public:
    Shop()
    {
        name                                    = "[S] Shop Atrributes";
        map_Choices[e_shop_cancel]              = "Cancel";
        map_Choices[e_shop_heal]                = "Heal yourself";
        map_Choices[e_shop_revive]              = "(100 gp) Revive character";
        map_Choices[e_shop_add_hitpoints]       = "( 75 gp) +10 hitpoints";
        map_Choices[e_shop_add_strength]        = "( 50 gp) + 2 strength";
        map_Choices[e_shop_add_agility]         = "( 50 gp) + 2 agility";
        map_Choices[e_shop_add_intelligence]    = "( 50 gp) + 2 intelligence";
    }

    //PRINT SHOP ITEMS

    //OPEN SHOP
    void openShop(std::shared_ptr<Player> &player);

    void print(int &gold, const int cost)
    {
        std::cout << "---\n"
                  << name << " " << gold << "\n"
                  << "---\n"
                  << "[1] (" << std::setw(3) << cost << " gp)" << this->map_Choices[1] << "\n";
        for(int i = 2; i != this->map_Choices.size (); i++)
            std::cout << "[" << i << "] " << this->map_Choices[i] << '\n';
        std::cout << "---\n" << "[0] " << this->map_Choices[0] << '\n';
    }
};


#endif //ENEMY_SHOP_H
