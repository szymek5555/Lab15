#ifndef GAME_H
#define GAME_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

namespace GameSpace {
    class Game {
    protected:
        string name;
        string gameLocation;
        string weather;

    public:
        Game(string in_name, string in_gameLocation, string in_weather);
        Game();
        virtual ~Game();
        virtual void type();
        void startGame();
        void endGame();

        friend void displayWeatherConditions(const Game& game);
    };

    void displayWeatherConditions(const Game& game);
}

#endif // GAME_H
