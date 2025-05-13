#ifndef ADVENTUREMODE_H
#define ADVENTUREMODE_H

#include <iostream>

namespace AdventureMode {
    // Klasa bazowa Character
    class Character {
    public:
        virtual void attack() {
            std::cout << "AdventureMode: Character attacking (default)" << std::endl;
        }
        virtual ~Character() {}
    };

    // Klasa pochodna Warrior
    class Warrior : public Character {
    public:
        void attack() override {
            std::cout << "AdventureMode: Warrior attacks with magical power in an adventure!" << std::endl;
        }
    };
}

#endif // ADVENTUREMODE_H
