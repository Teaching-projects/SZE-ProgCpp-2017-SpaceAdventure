#include "SolarSystem.h"

SolarSystem::SolarSystem(std::vector<SpaceObject> objects)
{
	objects = objects;
}

int SolarSystem::getMaxSpaceObjects()
{
	return maxSpaceObjects;
}

SpaceObject & SolarSystem::getSpaceObject(int i)
{
	return objects->at(i);
}

void SolarSystem::addSpaceObject(SpaceObject so)
{
	this->objects->push_back(so);
}
