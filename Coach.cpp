#include <iostream>
#include "Coach.h"

using namespace std;
using namespace PlayerSpace;

void Coach::managePlayer(const Player& player) {
    //Player player("Ben");
    cout << "Coach says " << player.getName() << " is ready to go!" << endl;
}
