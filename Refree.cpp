#include <iostream>
#include "Refree.h"
#include "Player.h"
#include "Game.h"

using namespace std;
using namespace GameSpace;
using namespace PlayerSpace;

void Refree::monitorGame(Player& player, Game& game) {
    cout << "Refree is monitoring the game." << endl;
    displayWeatherConditions(game);
    calculatePlayerStats(player);
}
