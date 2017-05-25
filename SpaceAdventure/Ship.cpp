#include "Ship.h"

Ship::Ship(int fuel, int oxygen, int hull, int upgrade, std::string location) : fuel(fuel), oxygen(oxygen), hull(hull), upgradeLevel(upgrade), location(location)
{

}

std::string Ship::getLocation()
{
	return location;
}

bool Ship::jump(std::string newLocation, int cost)
{
	if ( (fuel - cost) >= 0 && (oxygen - cost) >= 0 && (hull - cost) >= 0) {
		location = newLocation;
		fuel = fuel - cost;
		oxygen = oxygen - cost;
		hull = hull - cost;
		return true;
	}
	else {
		return false;
	}
}
