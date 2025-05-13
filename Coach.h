#ifndef COACH_H
#define COACH_H

#include "Player.h"

//Tworzymy nowy namespace
namespace PlayerSpace {
    class Coach {
    public:
        // 14.3 - Const argument 
        void managePlayer(const Player& player);
    };
}

#endif // COACH_H
