#include <iostream>
#include "FiveVsFive.h"
#include "Game.h"

using namespace std;
using namespace GameSpace;

FiveVsFive::FiveVsFive():Game("5v5 Game", "Default Field", "Sunny") {
    // Konstruktor 5v5
}

void FiveVsFive::type() {
    cout << "The game played is 5v5!" << endl;
}

FiveVsFive::~FiveVsFive() {
    cout << "5v5 destructor is called" << endl;
}
