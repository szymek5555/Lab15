#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <vector>

using namespace std;

class Observer
{
public:
	virtual void update() = 0;
};

#endif