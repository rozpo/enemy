cmake_minimum_required(VERSION 3.8)
project(enemy)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp data/game/Game.cpp data/game/Game.h data/game/menu/Menu.cpp data/game/menu/Menu.h data/game/create/Create.cpp data/game/create/Create.h data/Data.cpp data/Data.h data/characters/Character.cpp data/characters/Character.h data/characters/players/warrior/Warrior.cpp data/characters/players/warrior/Warrior.h data/characters/players/Player.cpp data/characters/players/Player.h data/skills/Skill.cpp data/skills/Skill.h data/characters/players/rogue/Rogue.cpp data/characters/players/rogue/Rogue.h data/characters/players/mage/Mage.cpp data/characters/players/mage/Mage.h Loop.cpp Loop.h)
add_executable(enemy ${SOURCE_FILES})