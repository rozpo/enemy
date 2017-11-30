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
    e_shop_recover,
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
        map_Choices[e_shop_heal]                = " Heal yourself";
        map_Choices[e_shop_revive]              = "(100 gp) Revive character";
        map_Choices[e_shop_recover]             = " Recover all skills";
        map_Choices[e_shop_add_hitpoints]       = "( 75 gp) +10 hitpoints";
        map_Choices[e_shop_add_strength]        = "( 50 gp) + 2 strength";
        map_Choices[e_shop_add_agility]         = "( 50 gp) + 2 agility";
        map_Choices[e_shop_add_intelligence]    = "( 50 gp) + 2 intelligence";
    }

    void openShop(std::shared_ptr<Player> &player);
    void print(int &gold, const int cost, int &recover);
};

#endif //ENEMY_SHOP_H