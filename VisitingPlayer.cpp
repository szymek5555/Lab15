#include <iostream>
#include "VisitingPlayer.h"

using namespace std;
using namespace PlayerSpace;

VisitingPlayer::VisitingPlayer() : Player("Visiting Player") {}

void VisitingPlayer::play() {
    cout << "Visiting Player enters the game!" << endl;
}

void VisitingPlayer::increaseHealth(int amount) {
    energy += amount;
}

void VisitingPlayer::printStats() const {
    cout << "Visitor stats: Energy = " << energy << ", Style Points = " << stylePoints << endl;
}
