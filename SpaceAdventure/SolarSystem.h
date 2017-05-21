#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include <vector>
#include "SpaceObject.h"

class SolarSystem {
		static const int maxSpaceObjects = 3;
		std::vector<SpaceObject> objects[maxSpaceObjects];
	public:
		SolarSystem(SpaceObject objects[]);
		static int getMaxSpaceObjects();
		SpaceObject& getSpaceObject(int);
		void addSpaceObject(SpaceObject);
};

#endif