#include "Randomizer.h"
#include "Randomizer.h"

void Randomizer::randomizeSolarSystem(SolarSystem s)
{
	srand(time(NULL));
	SpaceObject so;
	SpaceObject& ref=so;

	for (int i = 0; i < SolarSystem::getMaxSpaceObjects(); i++) {
		int r = rand() % maxRange + 1;

		if (r < spawnThreshold) {
			Randomizer::randomizeSpaceObject(ref);
			s.addSpaceObject(so);
		}
	}
}

void Randomizer::randomizeSpaceObject(SpaceObject o)
{
	int r = rand() % maxRange + 1;

	if (r < gasPlanetThreshold) {

	}
	else if (gasPlanetThreshold < r && r < rockyPlanetThreshold) {

	}
	else if (rockyPlanetThreshold < r && r < gardenPlanetThreshold) {

	}
	else if (gardenPlanetThreshold < r && r < spaceStationThreshold) {

	}
}