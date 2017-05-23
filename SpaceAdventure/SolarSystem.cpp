#include "SolarSystem.h"

SolarSystem::SolarSystem(SpaceObject objects[])
{
	objects = objects;
}

int SolarSystem::getMaxSpaceObjects()
{
	return maxSpaceObjects;
}

SpaceObject& SolarSystem::getSpaceObject(int i)
{
	return objects[i];
}

void SolarSystem::addSpaceObject(SpaceObject so)
{
	this->objects->push_back(so);
}