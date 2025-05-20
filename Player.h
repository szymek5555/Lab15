#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <vector>
#include "Observer.h"
#include "Subject.h"

using std::string;
using std::cout;
using std::endl;

namespace PlayerSpace {
    enum PlayerStatus { Healthy, Tired };

    class Player : public Subject {
    protected:
        string name;
        int energy;
        int score;
        int stylePoints;
        PlayerStatus status;
        static int objectCount;     // Statyczny licznik obiektów
        vector<Observer* > observers;

    public:
        Player(string in_name);
        Player();
        virtual void play();
        string getName() const;
        virtual ~Player();

        void crossover();
        void threePointer();
        void dunk();
        void rest();
        void displayStats();
        virtual int energyCheck(int energy) { return 0; }
        int getEnergy() const;      // Getter oznaczony jako const, zad 14.4
        int getStylePoints() const; // Getter oznaczony jako const, -||-
        void setStatus(PlayerStatus newStatus);

        // 14.1 - Statyczna funkcja zwracaj¹ca liczbê stworzonych obiektów
        //static int getObjectCount() { return 100; }
        static int getObjectCount();

        // 14.2 - Statyczna funkcja zwracaj¹ca domyœln¹ wartoœæ energii
        static int getDefaultEnergy() { return 100; }

        friend void calculatePlayerStats(const Player& player);

        void addObserver(Observer* observer) override
        {
            observers.push_back(observer);
        }

        void removeObserver(Observer* observer) override
        {
            observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
        }

        void notifyObservers() override
        {
            for (Observer* observer : observers)
            {
                observer->update();
            }
        }
    };

    void calculatePlayerStats(const Player& player);
}

#endif // PLAYER_H
