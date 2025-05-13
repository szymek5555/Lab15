#include "LocalPlayer.h"
#include <iostream>
using namespace std;
using namespace PlayerSpace;

LocalPlayer::LocalPlayer() : Player("Local Player") {}

void LocalPlayer::play() {
    cout << "Local Player enters the game!" << endl;
}

void LocalPlayer::increaseHealth(int amount) {
    energy += amount; // Zwi�kszenie energii
}

void LocalPlayer::printStats() const {
    cout << "LocalPlayer stats: Energy = " << energy << ", Style Points = " << stylePoints << endl;
}
