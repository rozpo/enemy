//
// Created by ezrozpi on 2017-11-29.
//

#ifndef ENEMY_BATTLE_H
#define ENEMY_BATTLE_H

#include "../../characters/players/Player.h"
#include "../../characters/enemies/Enemy.h"
#include "../../skills/Skill.h"
#include "../../factory/Factory.h"

class Battle
{
public:
    //CALCULATE DAMAGE
    template <typename T1, typename T2>
    static bool calculateDamage(std::shared_ptr<T1> &user,
                                std::shared_ptr<T2> &target,
                                int x,
                                const std::vector<std::shared_ptr<Skill>> &skills);

    //END BATTLE
    static void endBattle(std::shared_ptr<Player> &player,
                          std::shared_ptr<Enemy> &enemy);

    //LEVEL UP PLAYER
    static void levelupPlayer(std::shared_ptr<Player> &player);

    //DO BATTLE
    static void doBattle(std::shared_ptr<Player> &player,
                         std::shared_ptr<Enemy> &enemy,
                         const std::vector<std::shared_ptr<Skill>> &skills);

    //PRINT BATTLE
    static void printBattle(const std::shared_ptr<Player> &player,
                            const std::shared_ptr<Enemy> &enemy);

    //PRINT MOVES
    static void printMoves(const std::shared_ptr<Player> &player,
                           const std::vector<std::shared_ptr<Skill>> &skills);

    static std::vector<std::shared_ptr<Enemy>> createEnemy(std::vector<std::shared_ptr<Enemy>> enemies);

    template <typename T1>
    static int characterDamage(const std::shared_ptr<T1> &user,
                               int type);
};


#endif //ENEMY_BATTLE_H
