//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_TRAINING_H
#define ENEMY_TRAINING_H

#include "../Game.h"

enum e_Training
{
    e_training_cancel,
    e_training_health,
    e_training_strength,
    e_training_agility,
    e_training_intelligence
};

class Training: public Game
{
public:
    Training()
    {
        name = "[T] Training Center";
        map_Choices[ e_training_cancel ] = "Cancel";
        map_Choices[ e_training_health ] = "+2 Health";
        map_Choices[ e_training_strength ] = "+1 Strength";
        map_Choices[ e_training_agility ] = "+1 Agility";
        map_Choices[ e_training_intelligence ] = "+1 Intelligence";
    }

    void openTraining(std::shared_ptr<Player> &player);
};

#endif //ENEMY_TRAINING_H