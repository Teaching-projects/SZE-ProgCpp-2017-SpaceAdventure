#ifndef SHIP_H
#define SHIP_H

#include "Resource.h"

class Ship {
	const int maximumCargo = 2;
	ResourceType cargo[maximumCargo];
};

#endif