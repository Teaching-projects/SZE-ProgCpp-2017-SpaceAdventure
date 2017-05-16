#ifndef SHIP_H
#define SHIP_H

#include "Resource.h"

class Ship {
		int fuel;
		int oxygen;
		int hull;
		static const int maximumCargo = 2;
		ResourceType cargo[maximumCargo];

	public:
		Ship(int fuel, int oxygen, int hull);
};

#endif