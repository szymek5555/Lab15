#include <iostream>
#include "VisitingPlayer.h"

using namespace std;
using namespace PlayerSpace;

VisitingPlayer::VisitingPlayer() : Player("Visitor") {}

void VisitingPlayer::play() {
    cout << "Visiting Player enters the game!" << endl;
}

void VisitingPlayer::increaseHealth(int amount) {
    energy += amount;
}

int VisitingPlayer::energyCheck(int energy)
{
    if (energy < 0)
    {
        throw runtime_error("Error: Energy cannot be a negative number!");
    }
}

void VisitingPlayer::printStats() const {
    cout << "Visitor stats: Energy = " << energy << ", Style Points = " << stylePoints << endl;
}
