#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include "Randomizer.h"
#include <list>
#include <iostream>

typedef std::map<std::string, std::map<std::string, int>> initMap;

class MapGenerator {
	public:
		static std::map<std::string, SolarSystem> generateMap(initMap);
};


#endif