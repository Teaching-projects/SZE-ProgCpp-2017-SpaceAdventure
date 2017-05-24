#include "MapGenerator.h"

std::map<std::string, SolarSystem> MapGenerator::generateMap(std::list<std::string> l)
{
	std::map<std::string, SolarSystem> map = std::map<std::string, SolarSystem>();
	for (std::list<std::string>::iterator it = l.begin(); it != l.end(); ++it) {
		SolarSystem s = SolarSystem(*it);
	}
	
	return map;
}
