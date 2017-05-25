#ifndef PLANET_H
#define PLANET_H

#include "SpaceObject.h"
#include "Resource.h"

class Planet : public SpaceObject {
	bool mined;
	Resource resources;
public:
	Planet(Resource);
};

#endif