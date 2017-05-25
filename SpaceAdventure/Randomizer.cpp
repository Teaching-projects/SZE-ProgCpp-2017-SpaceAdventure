#include "Randomizer.h"
#include "Randomizer.h"

void Randomizer::randomizeSolarSystem(SolarSystem s)
{
	srand(time(NULL));
	SpaceObject so;
	SpaceObject& ref=so;

	for (int i = 0; i < SolarSystem::getMaxSpaceObjects(); i++) {
		int r = rand() % maxRange + 1;

		if (r < spaceStationThreshold) {
			Randomizer::randomizeSpaceObject(ref, r);
			s.addSpaceObject(so);
		}
	}
}

void Randomizer::randomizeSpaceObject(SpaceObject o, int r)
{
	if (r < gardenPlanetThreshold) {
		int resourceQuantity= rand() % Resource::maxResourceQuantity + 1;

		if (r < gasPlanetThreshold) {
			Resource res(ResourceType::hydrogen, resourceQuantity);
			o = GasPlanet(res);
		}
		else if (gasPlanetThreshold < r && r < rockyPlanetThreshold) {
			Resource res(ResourceType::iron, resourceQuantity);
			o = RockyPlanet(res);
		}
		else {
			Resource res(ResourceType::iron, resourceQuantity);
			o = GardenPlanet(res);
		}
	}
	else {
		o = SpaceStation();
	}
}