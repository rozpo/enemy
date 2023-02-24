//
// Created by ezrozpi on 2017-11-29.
//

#include "Training.h"

void Training::openTraining(std::shared_ptr<Player> &player)
{
    int z = 0;
    do
    {
        print();
        std::cout << player->name << "level points ( " << player->level_points << " )\n";
        z = choice();
        if(player->level_points > 0)
        {
            switch(z)
            {
                case e_training_health:
                {
                    player->hitpoints+=2;
                    player->max_hitpoints+=2;
                }
                    break;

                case e_training_strength:
                {
                    player->strength+=1;
                }
                    break;

                case e_training_agility:
                {
                    player->agility+=1;
                }
                    break;

                case e_training_intelligence:
                {
                    player->intelligence+=1;
                }
                    break;
            }
            player->level_points--;
        }
        else
            std::cout << "Not enough level points ;(\n";
    }while(z != 0);
}