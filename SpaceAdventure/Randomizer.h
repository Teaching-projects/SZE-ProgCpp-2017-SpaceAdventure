#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <stdlib.h>
#include <time.h>

#include "SolarSystem.h"

class Randomizer {
		static const int maxRange = 100;
		static const int spawnThreshold = 60;
		static const int gasPlanetThreshold = 30;
		static const int rockyPlanetThreshold = 50;
		static const int gardenPlanetThreshold = 60;
		static const int spaceStationThreshold = 65;
	public:
		void randomizeSolarSystem(SolarSystem system);
		void randomizeSpaceObject(SpaceObject object);
	};

#endif