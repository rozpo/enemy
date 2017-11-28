#include <iostream>

#include "data/game/Game.h"
#include "data/game/menu/Menu.h"
#include <memory>
#include "data/Data.h"
#include "data/characters/players/warrior/Warrior.h"

int main()
{
    std::shared_ptr<Menu> menu = std::make_shared <Menu>();
    menu->print();
    std::shared_ptr<Data> data = std::make_shared <Data>();
    data->players.push_back ( std::make_shared <Warrior>());
    data->players[0]->printCharacter ();
    return 0;
}