#ifndef SHIP_H
#define SHIP_H

#include "Resource.h"

class Ship {
	int fuel = 100;
	int oxygen = 100;
	int hull = 100;
	static const int maximumCargo = 2;
	ResourceType cargo[maximumCargo];
};

#endif