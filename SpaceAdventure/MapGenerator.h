#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#include "Randomizer.h"
#include <list>

typedef std::map<std::string, std::map<std::string, int>> initMap;

class MapGenerator {
	//static const int numberOfNames = 6;
	//std::string names[numberOfNames];
public:
	static std::map<std::string, SolarSystem> generateMap(std::map<std::string, std::map<std::string, int>>);
};


#endif