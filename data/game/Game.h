//
// Created by ezrozpi on 2017-11-28.
//

#ifndef ENEMY_GAME_H
#define ENEMY_GAME_H

#include <iostream>
#include <map>

class Game
{
protected:
    std::map<int, std::string> map_Choices;
public:
    void print()
    {
        std::cout << "------------------------------------" << '\n';
        for(int i = 1; i != this->map_Choices.size (); i++)
            std::cout << "[" << i << "]: " << this->map_Choices[i] << '\n';
        std::cout << '\n' << "[0]: " << this->map_Choices[0] << '\n';
    }
};

#endif //ENEMY_GAME_H