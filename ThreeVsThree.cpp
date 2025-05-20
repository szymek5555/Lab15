#include <iostream>
#include "ThreeVsThree.h"

using namespace std;
using namespace GameSpace;

ThreeVsThree::ThreeVsThree() : Game("3v3 Match", "Playground", "Cloudy") {}

void ThreeVsThree::type() {
    cout << "The game played is streetball 3v3!" << endl;
}

//void ThreeVsThree::rules() {
//    {
//        if (playersamount < 6)
//        {
//            throw runtime_error("Error: Not enough players to play a 3vs3 game!");
//        }
//    }
//}

ThreeVsThree::~ThreeVsThree() {
    cout << "3v3 destructor is called" << endl;
}
