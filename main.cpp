#include <iostream>

#include "data/game/Game.h"
#include "Loop.h"

int main()
{
    std::shared_ptr<Loop> loop = std::make_shared <Loop>();
    loop->mainLoop();
    return 0;
}