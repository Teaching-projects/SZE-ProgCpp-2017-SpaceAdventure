#ifndef SHIP_H
#define SHIP_H

#include "Resource.h"
#include <string>

class Ship {
		int fuel;
		int oxygen;
		int hull;
		static const int maximumCargo = 2;
		ResourceType cargo[maximumCargo];
		int upgradeLevel;
		std::string location;
	public:
		Ship(int fuel, int oxygen, int hull, int upgrade, std::string location);
};

#endif