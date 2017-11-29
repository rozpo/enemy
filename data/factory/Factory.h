//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_FACTORY_H
#define ENEMY_FACTORY_H

#include <memory>
#include "../characters/players/Player.h"
#include "../characters/enemies/Enemy.h"

class Factory
{
private:
    Factory(){};
    Factory(const Factory &){};
    Factory& operator= (const Factory&){};
public:
    static std::shared_ptr<Player> createPlayer(int type);
    static std::shared_ptr<Enemy>  createEnemy(int type);
    static Factory& getInstance();
};

#endif //ENEMY_FACTORY_H