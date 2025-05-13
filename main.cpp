#include <iostream>
#include "Player.h"
#include "Game.h"
#include "Refree.h"
#include "Coach.h"
#include "LocalPlayer.h"
#include "VisitingPlayer.h"
#include "ThreeVsThree.h"
#include "FiveVsFive.h"
#include "FieldModifier.h"  //Class Template
#include "ArenaMode.h"      //Task 13
#include "AdventureMode.h"  //Task 13

//Namespaces
using namespace std;
using namespace PlayerSpace;
using namespace GameSpace;
using namespace UtilitySpace;

int main() {
    //Tworzymy gracza z przestrzeni PlayerSpace
    PlayerSpace::Player player("Ben Wallace");

    cout << player.getObjectCount() << endl;
    cout << player.getEnergy() << endl;
    cout << player.getName() << endl;

    //Tworzymy grę z przestrzeni GameSpace
    GameSpace::Game game("Streetball Showdown", "Henryk Jordan's Park", "Sunny");

    game.startGame();

    //Utworzenie obiektu VisitingPlayer
    Player* a = new VisitingPlayer();
    a->play();

    //Utworzenie meczu 3v3
    Game* b = new ThreeVsThree();
    b->type();

    Refree refree;
    refree.monitorGame(player, game);

    //Coach zarządza graczem (metoda przyjmująca const Player&)
    Coach coach;
    coach.managePlayer(player);

    //Utworzenie graczy dla szablonu klasy z zad 11
    LocalPlayer* lp = new LocalPlayer();
    VisitingPlayer* vp = new VisitingPlayer();

    FieldModifier<LocalPlayer> lpMod;
    FieldModifier<VisitingPlayer> vpMod;

    lpMod.increaseHealth(lp, 20);
    vpMod.increaseHealth(vp, 10);

    lpMod.printStats(lp);
    vpMod.printStats(vp);

    //Główna funkcja
    int userInput;
    while (true) {
        cout << "\nChoose a move (Select 1 for crossover, 2 for three-pointer, 3 for a dunk, 4 to rest or 0 to exit): ";
        cin >> userInput;

        if (userInput == 0) {
            game.endGame();
            break;
        }

        switch (userInput) {
        case 1: player.crossover(); break;
        case 2: player.threePointer(); break;
        case 3: player.dunk(); break;
        case 4: player.rest(); break;
        default: cout << "\nInvalid choice!" << endl;
        }

        player.displayStats();

        if (player.getEnergy() <= 0) {
            cout << "\nYou have no energy left! Game over!" << endl;
            break;
        }

        if (player.getStylePoints() == 200) {
            cout << "You won! It's over!" << endl;
            break;
        }
    }

    delete a;
    delete b;
    delete lp;
    delete vp;

    //Tutaj pokazujemy dwie przestrzenie nazw z identycznymi nazwami klas, ale odmiennej logiki
    cout << "\n--- Task 13 Demonstration ---\n" << endl;

    //Użycie nowej klasy Warrior z namespace ArenaMode
    ArenaMode::Warrior arenaWarrior;
    arenaWarrior.attack();

    //Użycie tej samej klasy Warrior z namespace AdventureMode
    AdventureMode::Warrior adventureWarrior;
    adventureWarrior.attack();

    return 0;
}
