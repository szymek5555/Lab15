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
    };
}

#endif // LOCALPLAYER_H
