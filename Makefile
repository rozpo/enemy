CC = g++
CFLAGS = -g -O -std=c++11
LIBS = -lm

OBJ =\
	data/characters/Character.o \
	data/characters/enemies/Enemy.o \
	data/characters/enemies/goblin/Goblin.o \
	data/characters/enemies/orc/Orc.o \
	data/characters/enemies/warlock/Warlock.o \
	data/characters/players/Player.o \
	data/characters/players/warrior/Warrior.o \
	data/characters/players/rogue/Rogue.o \
	data/characters/players/mage/Mage.o \
	data/factory/Factory.o \
	data/game/battle/Battle.o \
	data/game/create/Create.o \
	data/game/items/Item.o \
	data/game/menu/Menu.o \
	data/game/select/Select.o \
	data/game/shop/Shop.o \
	data/game/stats/Stats.o \
	data/game/training/Training.o \
	data/game/Game.o \
	data/skills/Skill.o \
	data/Data.o \
	Loop.o \
	main.o

all: main

clean:
	find . -type f -name '*.o' -print -delete
	rm enemy

.c.o:
	$(CC) -c $(INCLUDES) $(CFLAGS) $<

main: $(OBJ)
	$(CC) $(OBJ) $(LIBS) -o enemy