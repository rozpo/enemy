//
// Created by ezrozpi on 2017-11-28.
//

#include "Create.h"

std::vector<std::shared_ptr<Player>> Create::createPlayer(std::vector<std::shared_ptr<Player>> &players, int &status)
{
    if (players.size () < 5)
    {
        if( status ==1 || status ==2 || status ==3)
        {
            players.push_back (Factory::getInstance().createPlayer(status));
            return players;
        }
        else
            return players;
    }
    else
    {
        std::cout << "Characters limit" << "\n";
        return players;
    }
}