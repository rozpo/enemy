//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_GAME_H
#define ENEMY_GAME_H

#include <iostream>
#include <map>
#include <cctype>
#include "../characters/players/Player.h"

class Game
{
protected:
    std::map<int, std::string> map_Choices;
    std::string name;
public:
    void print();
    int  choice();
    void printPlayer(const std::shared_ptr<Player> &player);
};

#endif //ENEMY_GAME_H