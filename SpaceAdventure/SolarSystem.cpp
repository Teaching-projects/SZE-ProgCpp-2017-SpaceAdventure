#include "SolarSystem.h"

SolarSystem::SolarSystem(SpaceObject objects[])
{
	objects = objects;
}

int SolarSystem::getMaxSpaceObjects()
{
	return maxSpaceObjects;
}
