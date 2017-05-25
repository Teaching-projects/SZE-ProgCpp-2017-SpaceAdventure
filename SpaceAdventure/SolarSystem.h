#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include <vector>
#include <map>
#include "SpaceObject.h"

class SolarSystem {
		static const int maxSpaceObjects = 3;
		std::vector<SpaceObject> objects[maxSpaceObjects];
		std::string name;
		std::map<std::string, int> neighbours;
	public:
		SolarSystem(std::string);
		static int getMaxSpaceObjects();
		SpaceObject& getSpaceObject(int);
		void addSpaceObject(SpaceObject);
		void addNeighbour(std::string, int);

};

#endif