#ifndef ARENAMODE_H
#define ARENAMODE_H

#include <iostream>

namespace ArenaMode {
    // Klasa bazowa Character
    class Character {
    public:
        virtual void attack() {
            std::cout << "ArenaMode: Character attacking (default)" << std::endl;
        }
        virtual ~Character() {}
    };

    // Klasa pochodna Warrior
    class Warrior : public Character {
    public:
        void attack() override {
            std::cout << "ArenaMode: Warrior attacks fiercely in the arena!" << std::endl;
        }
    };
}

#endif // ARENAMODE_H
