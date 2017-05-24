#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <stdlib.h>
#include <time.h>

#include "SolarSystem.h"
#include "GasPlanet.h"
#include "RockyPlanet.h"
#include "GardenPlanet.h"
#include "SpaceStation.h"
#include "Resource.h"

class Randomizer {
		static const int maxRange = 100;
		static const int gasPlanetThreshold = 30;
		static const int rockyPlanetThreshold = 50;
		static const int gardenPlanetThreshold = 60;
		static const int spaceStationThreshold = 65;
	public:
		static void randomizeSolarSystem(SolarSystem);
		static void randomizeSpaceObject(SpaceObject, int);
	};

#endif