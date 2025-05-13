#include <iostream>
#include "ThreeVsThree.h"

using namespace std;
using namespace GameSpace;

ThreeVsThree::ThreeVsThree() : Game("3v3 Match", "Playground", "Cloudy") {}

void ThreeVsThree::type() {
    cout << "The game played is streetball 3v3!" << endl;
}

ThreeVsThree::~ThreeVsThree() {
    cout << "3v3 destructor is called" << endl;
}
