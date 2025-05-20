#ifndef THREEVSTHREE_H
#define THREEVSTHREE_H

#include "Game.h"

namespace GameSpace {
    class ThreeVsThree : public Game {
    public:
        ThreeVsThree();
        void type() override;
        ~ThreeVsThree() override;
        //void rules();
    };
}

#endif // THREEVSTHREE_H
