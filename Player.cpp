#include <iostream>
#include "Player.h"
#include<vector>

using namespace std;
using namespace PlayerSpace;

int Player::objectCount = 0;

Player::Player(string in_name)
    : name(in_name), energy(100), score(0), stylePoints(0), status(Healthy)
{
    objectCount++;
}

Player::Player() {
    cout << "Player constructor is called" << endl;
    name = "Unknown";
    energy = 100;
    score = 0;
    stylePoints = 0;
    status = Healthy;
    objectCount++;
}

// 14.1
int Player::getObjectCount() {
    cout << "This:" << objectCount << " is the object count" << endl;
    return objectCount;
}

//14.4 - Getter function jako const
int Player::getEnergy() const {
    return energy;
}

//14.4 - Getter function jako const
int Player::getStylePoints() const {
    //stylePoints = 100;
    return stylePoints;
}

void Player::play() {
    cout << "Player has started the game!" << endl;
}

string Player::getName() const {
    //string name = "Bolek";
    return name;
}

Player::~Player() {
    cout << name << " is leaving the game! The player destructor is called" << endl;
}

void Player::crossover() {
    if (energy >= 10 && status == Healthy) {
        energy -= 10;
        cout << name << " does a crossover!" << endl;
        stylePoints += 20;
    }
    else {
        cout << name << " is EXHAUSTED!" << endl;
    }
    notifyObservers();
}

void Player::threePointer() {
    if (energy >= 15 && status == Healthy) {
        energy -= 15;
        cout << name << " scores a three-pointer!" << endl;
        score += 3;
        stylePoints += 5;
    }
    else {
        cout << name << " is EXHAUSTED!" << endl;
    }
    notifyObservers();
}

void Player::dunk() {
    if (energy >= 25 && status == Healthy) {
        energy -= 25;
        cout << name << " dunks the ball!" << endl;
        score += 2;
        stylePoints += 25;
    }
    else {
        cout << name << " is EXHAUSTED!" << endl;
    }
    notifyObservers();
}

void Player::rest() {
    if (energy < 100) {
        energy += 20;
        cout << name << " calls for a timeout!" << endl;
    }
    else {
        cout << name << " is already fully energized!" << endl;
    }
    notifyObservers();
}

void Player::displayStats() {
    cout << "Player: " << name
        << " | Score: " << score
        << " | Energy: " << energy
        << " | Style: " << stylePoints
        << " | Status: " << (status == Healthy ? "Healthy" : "Tired")
        << endl;
}

void Player::setStatus(PlayerStatus newStatus) {
    status = newStatus;
    notifyObservers();
}

// Wykorzystujemy namespace PlayerSpace 
void PlayerSpace::calculatePlayerStats(const Player& player) {
    int totalScore = player.score + player.stylePoints;
    cout << player.name << "'s total score is: " << totalScore << endl;
}
