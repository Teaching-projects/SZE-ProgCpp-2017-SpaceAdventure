#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <stdlib.h>
#include <time.h>

#include "SolarSystem.h"

class Randomizer {
		static const int maxRange = 100;
		static const int GasPlanetThreshold = 30;
		static const int RockyPlanetThreshold = 50;
		static const int GardenPlanetThreshold = 60;
		static const int SpaceStationThreshold = 65;
	public:
		void randomizeSolarSystem(SolarSystem system);
		void randomizeSpaceObject(SpaceObject object);
	};

#endif