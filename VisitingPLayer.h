#ifndef VISITINGPLAYER_H
#define VISITINGPLAYER_H

#include "Player.h"

namespace PlayerSpace {
    class VisitingPlayer : public Player {
    public:
        VisitingPlayer();
        void play() override;
        void increaseHealth(int amount);
        void printStats() const;
    };
}

#endif // VISITINGPLAYER_H
