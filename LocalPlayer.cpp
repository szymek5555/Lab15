#include "LocalPlayer.h"
#include <iostream>
using namespace std;
using namespace PlayerSpace;

LocalPlayer::LocalPlayer() : Player("Local Player") {}

void LocalPlayer::play() {
    cout << "Local Player enters the game!" << endl;
}

void LocalPlayer::increaseHealth(int amount) {
    energy += amount; // Zwiêkszenie energii
}

void LocalPlayer::printStats() const {
    cout << "LocalPlayer stats: Energy = " << energy << ", Style Points = " << stylePoints << endl;
}

void LocalPlayer::wearLevel(int energy)
{
    if (energy < 80)
    {
        throw runtime_error("Error: Energy is too low to get in the game!");
    }
}