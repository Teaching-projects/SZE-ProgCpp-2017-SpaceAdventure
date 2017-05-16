#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include "SpaceObject.h"

class SolarSystem {
		static const int maxSpaceObjects = 3;
		SpaceObject objects[maxSpaceObjects];
	public:
		SolarSystem(SpaceObject objects[]);
		static int getMaxSpaceObjects();
};

#endif