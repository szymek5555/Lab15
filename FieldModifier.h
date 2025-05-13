#ifndef FIELDMODIFIER_H
#define FIELDMODIFIER_H

#include <iostream>

namespace UtilitySpace {
    template<class C>
    class FieldModifier {
    public:
        void increaseHealth(C* obj, int amount) {
            obj->increaseHealth(amount);
        }

        void printStats(C* obj) {
            obj->printStats();
        }
    };
}

#endif // FIELDMODIFIER_H

//Szablon klasy � template<class C> � m�wi kompilatorowi, �e klasa FieldModifier jest szablonem i jej dzia�anie zale�y od typu przekazanego jako C.
//C jest parametrem typu, kt�ry pozwala na u�ywanie r�nych typ�w obiekt�w(np.LocalPlayer, VisitingPlayer) w tej samej klasie.