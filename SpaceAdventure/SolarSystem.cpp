#include "SolarSystem.h"

SolarSystem::SolarSystem(std::string s): objects(), name(s), neighbours()
{
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

void SolarSystem::addNeighbour(std::string s, int i)
{
	neighbours.insert(std::pair<std::string, int>(s, i));
}
