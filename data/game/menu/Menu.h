//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_MENU_H
#define ENEMY_MENU_H

#include "../Game.h"

enum e_Menu
{
    e_menu_cancel,
    e_menu_create,
    e_menu_select,
    e_menu_stats,
    e_menu_battle,
    e_menu_shop,
    e_menu_moves
};

class Menu: public Game
{
public:
    Menu()
    {
        map_Choices[e_menu_cancel]  = "Cancel";
        map_Choices[e_menu_create]  = "Create";
        map_Choices[e_menu_select]  = "Select";
        map_Choices[e_menu_stats]   = "Stats";
        map_Choices[e_menu_battle]  = "Battle";
        map_Choices[e_menu_shop]    = "Shop";
        map_Choices[e_menu_moves]   = "Moves";
    }
};

#endif //ENEMY_MENU_H