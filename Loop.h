//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_LOOP_H
#define ENEMY_LOOP_H

#include "data/Data.h"
#include "data/game/menu/Menu.h"
#include "data/game/create/Create.h"
#include "data/game/select/Select.h"
#include "data/game/stats/Stats.h"
#include "data/game/battle/Battle.h"
#include "data/game/shop/Shop.h"
#include "data/game/training/Training.h"
#include "data/game/items/Item.h"

enum e_Loop
{
    e_loop_cancel,
    e_loop_create,
    e_loop_select,
    e_loop_stats,
    e_loop_battle,
    e_loop_shop,
    e_loop_training,
    e_loop_items,
    e_loop_skills
};

class Loop
{

public:
    int set;
    int status;

    void mainLoop()
    {
        std::shared_ptr<Data>       data        = std::make_shared <Data>();
        std::shared_ptr<Menu>       menu        = std::make_shared <Menu>();
        std::shared_ptr<Create>     create      = std::make_shared <Create>();
        std::shared_ptr<Select>     select      = std::make_shared <Select>();
        std::shared_ptr<Stats>      stats       = std::make_shared <Stats>();
        std::shared_ptr<Shop>       shop        = std::make_shared <Shop>();
        std::shared_ptr<Training>   training    = std::make_shared <Training>();
        std::shared_ptr<Item>       items       = std::make_shared <Item>();
        Skill::createSkills (data->skills);
        do
        {
            status = e_loop_cancel;

            //if(data->players.size () != 0)
                //menu->printPlayer(data->players[data->activeplayer]);

            menu->print();
            status = menu->choice();

            switch(status)
            {
                case e_loop_create:
                {
                    create->print();
                    set = create->choice();
                    create->createPlayer(data->players,set);
                    data->activeplayer = data->players.size ()-1;
                }
                    break;

                case e_loop_select:
                {
                    if(data->players.empty() == 0)
                    {
                        select->print(data->players);
                        set = select->choice();
                        if(set !=0 && set < data->players.size ())
                            data->activeplayer = select->selectPlayer(set);
                    }


                }
                    break;

                case e_loop_stats:
                {
                    if(data->players.empty() == 0)
                    {
                        stats->print(data->players[data->activeplayer]);
                    }
                }
                    break;

                case e_loop_battle:
                {
                    if(data->players.empty() == 0)
                    {
                        data->enemies = Battle::createEnemy(data->enemies);
                        Battle::doBattle(data->players[data->activeplayer],
                                         data->enemies[data->enemies.size()-1],
                                         data->skills);
                    }
                }
                    break;

                case e_loop_shop:
                {
                    if(data->players.empty() == 0)
                    {
                        shop->openShop(data->players[data->activeplayer]);
                    }
                }
                    break;

                case e_loop_training:
                {
                    if(data->players.empty() == 0)
                    {
                        training->openTraining(data->players[data->activeplayer]);
                    }
                }
                    break;

                case e_loop_skills:
                {
                    if(data->players.empty() == 0)
                    {
                        Skill::printSkills(data->skills);
                    }
                }
                    break;

                case e_loop_items:
                {
                    if(data->players.empty() == 0)
                    {
                        items->openItem(data->players[data->activeplayer]);
                    }
                }
                    break;

                default:
                    return;
            }
        }while(status != e_loop_cancel);
    }
};

#endif //ENEMY_LOOP_H