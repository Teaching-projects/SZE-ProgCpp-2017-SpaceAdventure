#include "MapGenerator.h"


std::map<std::string, SolarSystem> MapGenerator::generateMap(initMap iMap)
{
	std::map<std::string, SolarSystem> map = std::map<std::string, SolarSystem>();

	for (initMap::iterator it = iMap.begin(); it != iMap.end(); it++) {												//végigiterálok a naprendszerek nevein

		SolarSystem s = SolarSystem(it->first);
		SolarSystem& ref = s;
		Randomizer::randomizeSolarSystem(ref);
		for (std::map<std::string, int>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2++) {		//végigiterálok az adott naprendszer szomszédjain
			s.addNeighbour(it2->first, it2->second);
		}
		map.insert(std::pair<std::string, SolarSystem>(it->first, s));												//egy map-be helyezem a naprendszerek neveit és a hozzájuk tartozó rendszer-objektumot
	}
	
	return map;
}
