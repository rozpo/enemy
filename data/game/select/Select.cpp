//
// Created by ezrozpi on 2017-11-29.
//

#include "Select.h"

void Select::print(const std::vector<std::shared_ptr<Player>> &players)
{
    if (players.empty () == 0)
    {
        std::cout << "---\n"
                  << name << "\n\n";
        for ( int i = 0 ; i < players.size () ; i ++ )
            std::cout << "[" << i + 1 << "]: " << players[ i ]->name << '\n';
        std::cout << '\n' << "---\n" << "[0]: " << this->map_Choices[0] << '\n';
    }
}

int Select::selectPlayer(const int status)
{
    return status-1;
}