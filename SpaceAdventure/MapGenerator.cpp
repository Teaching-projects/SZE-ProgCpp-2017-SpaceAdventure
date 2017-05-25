#include "MapGenerator.h"


std::map<std::string, SolarSystem> MapGenerator::generateMap(initMap iMap)
{
	std::map<std::string, SolarSystem> map = std::map<std::string, SolarSystem>();

	for (initMap::iterator it = iMap.begin(); it != iMap.end(); it++) {												//v�gigiter�lok a naprendszerek nevein

		SolarSystem s = SolarSystem(it->first);
		SolarSystem& ref = s;
		Randomizer::randomizeSolarSystem(ref);
		for (std::map<std::string, int>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2++) {		//v�gigiter�lok az adott naprendszer szomsz�djain
			s.addNeighbour(it2->first, it2->second);
		}
		map.insert(std::pair<std::string, SolarSystem>(it->first, s));												//egy map-be helyezem a naprendszerek neveit �s a hozz�juk tartoz� rendszer-objektumot
	}
	
	return map;
}
