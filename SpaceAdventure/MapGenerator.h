#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include "Randomizer.h"
#include <list>

class MapGenerator {
public:
	static std::map<std::string, SolarSystem> generateMap(std::list<std::string>);
};


#endif