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
	return objects[i];
}


void SolarSystem::addSpaceObject(SpaceObject so)
{
	objects.push_back(so);
}


void SolarSystem::addNeighbour(std::string s, int i)
{
	neighbours.insert(std::pair<std::string, int>(s, i));
}


std::map<std::string, int> SolarSystem::getNeighbours()
{
	return neighbours;
}


std::vector<SpaceObject> SolarSystem::getObjects()
{
	return objects;
}
