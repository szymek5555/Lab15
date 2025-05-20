#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>
#include <vector>
#include "Observer.h"

using namespace std;

class Subject
{
public:
	virtual void addObserver(Observer* observer) = 0;
	virtual void removeObserver(Observer* observer) = 0;
	virtual void notifyObservers() = 0;
};

#endif