#include "MapGenerator.h"

//std::string names[] = { "Eltanin", "Avior", "Lesath", "Seginus", "Ogma", "Nap" };

std::map<std::string, SolarSystem> MapGenerator::generateMap(initMap iMap)
{
	std::map<std::string, SolarSystem> map = std::map<std::string, SolarSystem>();

	for (initMap::iterator it = iMap.begin(); it != iMap.end(); it++) {
		SolarSystem s = SolarSystem(it->first);
		SolarSystem& ref = s;
		Randomizer::randomizeSolarSystem(ref);
		for (std::map<std::string, int>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2++) {
			s.addNeighbour(it2->first, it2->second);
		}
		map.insert(std::pair<std::string, SolarSystem>(it->first, s));
	}

	/*for (int i = 0; i < numberOfNames; i++) {
		SolarSystem s = SolarSystem(names[i]);
		SolarSystem& ref = s;
		Randomizer::randomizeSolarSystem(ref);
		if (i < numberOfNames - 1) {
		//	s.addNeighbour();
		}
		map.insert(std::pair<std::string, SolarSystem>(names[i], s));
	}*/
	
	return map;
}
