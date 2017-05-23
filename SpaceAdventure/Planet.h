#ifndef PLANET_H
#define PLANET_H

#include "SpaceObject.h"

class Planet : SpaceObject {
		bool mined;
	public:
		Planet(bool mined);
};

#endif