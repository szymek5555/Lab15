#ifndef REFREE_H
#define REFREE_H

#include "Player.h"
#include "Game.h"

namespace GameSpace {
    class Refree {
    public:
        void monitorGame(PlayerSpace::Player& player, Game& game);
    };
}

#endif // REFREE_H
