#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include <map>
#include "Randomizer.h"

class MapGenerator {
public:
	static std::map<SolarSystem, int> generateMap();
};


#endif