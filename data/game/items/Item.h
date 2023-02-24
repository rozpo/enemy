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
        name = "[I] Item Shop";
        map_Choices[ e_item_cancel ] = "Cancel";
        map_Choices[ e_item_dagger ] = "( 50 gp) + 5 dagger";
        map_Choices[ e_item_shortsword ] = "(120 gp) +10 short sword";
        map_Choices[ e_item_greataxe ] = "(299 gp) +19 great axe";
        map_Choices[ e_item_heavyhammer ] = "(420 gp) +35 heavy hammer";
        map_Choices[ e_item_devilscythe ] = "(666 gp) +666 Legendary Lucifer's Scythe ";
    }

    void openItem(std::shared_ptr<Player> &player);
};
#endif //ENEMY_ITEM_H