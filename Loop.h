//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_LOOP_H
#define ENEMY_LOOP_H

#include "data/Data.h"
#include "data/game/menu/Menu.h"
#include "data/game/create/Create.h"

enum e_Loop
{
    e_loop_start,
    e_loop_main,
    e_loop_create
};

class Loop
{
    static e_Loop status;

    void mainLoop()
    {
        std::shared_ptr<Data> data = std::make_shared <Data>();
        std::shared_ptr<Menu> menu = std::make_shared <Menu>();
        std::shared_ptr<Create> create = std::make_shared <Create>();
        status = e_loop_main;

        while(true)
        {
            switch(status)
            {
                case e_loop_main:
                {
                    menu->print();
                }
                    break;
                case e_loop_create:
                {
                    create->print();
                }
                    break;

                default:
                    return;
            }
        }
    }
};

#endif //ENEMY_LOOP_H