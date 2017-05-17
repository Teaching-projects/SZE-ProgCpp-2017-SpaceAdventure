#include "SolarSystem.h"

SolarSystem::SolarSystem(SpaceObject objects[])
{
	objects = objects;
}

int SolarSystem::getMaxSpaceObjects()
{
	return maxSpaceObjects;
}

SpaceObject & SolarSystem::getSpaceObject(int i)
{
	return objects[i];
}
