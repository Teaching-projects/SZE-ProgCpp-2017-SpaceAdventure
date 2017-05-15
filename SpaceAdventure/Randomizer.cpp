#include "Randomizer.h"

void Randomizer::randomizeSolarSystem(SolarSystem system)
{
	srand(time(NULL));
	for (int i = 0; i < SolarSystem::getMaxSpaceObjects(); i++) {
		
	}
}

void Randomizer::randomizeSpaceObject(SpaceObject object)
{
	int r = rand() % maxRange + 1;

	if (r < GasPlanetThreshold) {

	}
	else if (GasPlanetThreshold < r && r < RockyPlanetThreshold) {

	}
	else if (RockyPlanetThreshold < r && r < GardenPlanetThreshold) {

	}
	else if (GardenPlanetThreshold < r && r < SpaceStationThreshold) {

	}
}
