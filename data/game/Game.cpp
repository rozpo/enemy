//
// Created by ezrozpi on 2017-11-28.
//

#include "Game.h"

void Game::print()
{
    std::cout << "---\n"
              << name << "\n"
              << "---\n";
    for(int i = 1; i != this->map_Choices.size (); i++)
        std::cout << "[" << i << "] " << this->map_Choices[i] << '\n';
    std::cout << "---\n" << "[0] " << this->map_Choices[0] << '\n';
}

int Game::choice()
{
    int x = 0;
    do
    {
        std::cout << "[>] ";
        std::cin >> x;
    }while(isdigit(x)!=0);
    return x;
}

void Game::printPlayer(const std::shared_ptr<Player> &player)
{
    std::cout << "  [[ " << player->showName() << " ]]\n";
}