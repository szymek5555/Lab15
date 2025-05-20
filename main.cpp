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
#include "UI.h"
#include "Subject.h"
#include "Observer.h"

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
    //game.playersamount = 5;

    game.startGame();

    //Utworzenie obiektu VisitingPlayer
    PlayerSpace::Player* a = new PlayerSpace::VisitingPlayer();
    a->play();
    try
    {
        cout << "Result:" << a->energyCheck(a->getEnergy()) << endl;
    }
    catch (const runtime_error& e)
    {
        cout << e.what() << endl;
    }

    ////Utworzenie meczu 3v3
    //GameSpace::Game* t = new GameSpace::ThreeVsThree();
    //t->type();
    //try
    //{
    //    cout << "Result:" << game.playersamount << endl;
    //}
    //catch (const runtime_error& f)
    //{
    //    cout << f.what() << endl;
    //}

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

    UI* ui = new UI();
    
    //Główna funkcja
    int userInput;
    while (true) {

        a->addObserver(ui);
        cout << "\nChoose a move (Select 1 for crossover, 2 for three-pointer, 3 for a dunk, 4 to rest or 0 to exit): ";
        cin >> userInput;

        if (userInput == 0) {
            game.endGame();
            break;
        }

        switch (userInput) {
        case 1: a->crossover(); break;
        case 2: a->threePointer(); break;
        case 3: a->dunk(); break;
        case 4: a->rest(); break;
        default: cout << "\nInvalid choice!" << endl;
        }

        a->displayStats();

        if (a->getEnergy() <= 0) {
            cout << "\nYou have no energy left! Game over!" << endl;
            break;
        }

        if (a->getStylePoints() == 60) {
            cout << "You won! It's over!" << endl;
            break;
        }
    }

    delete a;
    //delete t;
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
