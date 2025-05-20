#ifndef UI_H
#define UI_H

#include <iostream>
#include <vector>
#include "Subject.h"
#include "Observer.h"

using namespace std;

class UI : public Observer
{
public:
	void update() override
	{
		//Update the UI (e.g., display character's updated stats)
		cout << "UI: Character's state has changed!" << endl;
	}
};

#endif