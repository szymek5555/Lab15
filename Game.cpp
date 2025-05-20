#include <iostream>
#include "Game.h"

using namespace std;
using namespace GameSpace;

Game::Game(string in_name, string in_gameLocation, string in_weather): name(in_name), gameLocation(in_gameLocation), weather(in_weather){
    cout << "Game constructor is called." << endl;
}

Game::Game() : name("Default Game"), gameLocation("Default Location"), weather("Unknown") {
    cout << "Default Game constructor is called." << endl;
}

Game::~Game() {
    cout << "Game " << name << " at " << gameLocation << " is ending. The game destructor is called." << endl;
}

void Game::type() {
    cout << "The game played is a classic 1v1!" << endl;
    cout << name << endl;
}

void Game::startGame() {
    cout << "Starting the game: " << name << " at " << gameLocation << endl;
}

void Game::endGame() {
    cout << "Game Over!" << endl;
}

namespace GameSpace {
    void displayWeatherConditions(const Game& game) {
        cout << "The weather at " << game.gameLocation << " is " << game.weather << "." << endl;
    }
}


