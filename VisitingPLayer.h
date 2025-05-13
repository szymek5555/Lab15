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
        int energyCheck(int energy) override;
    };
}

#endif // VISITINGPLAYER_H
