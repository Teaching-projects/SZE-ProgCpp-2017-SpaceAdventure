#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include <vector>
#include <map>
#include <list>
#include "SpaceObject.h"
#include <string>

class SolarSystem {
		static const int maxSpaceObjects = 3;
		std::vector<SpaceObject> objects;
		std::string name;
		std::map<std::string, int> neighbours;
	public:
		SolarSystem(std::string);
		static int getMaxSpaceObjects();
		SpaceObject& getSpaceObject(int);
		void addSpaceObject(SpaceObject);
		void addNeighbour(std::string, int);
		std::map<std::string, int> getNeighbours();
		std::vector<SpaceObject> getObjects();
};

#endif