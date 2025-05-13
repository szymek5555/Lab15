#ifndef FIVEVSFIVE_H
#define FIVEVSFIVE_H

#include "Game.h"

namespace GameSpace {
    class FiveVsFive : public Game {
    public:
        FiveVsFive();
        void type() override;
        ~FiveVsFive() override;
    };
}

#endif // FIVEVSFIVE_H
