#ifndef LOCALPLAYER_H
#define LOCALPLAYER_H

#include "Player.h"

namespace PlayerSpace {
    class LocalPlayer : public Player {
    public:
        LocalPlayer();
        void play() override;
        void increaseHealth(int amount);
        void printStats() const;
        void wearLevel(int energy);
    };
}

#endif // LOCALPLAYER_H
