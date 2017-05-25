#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <ctype.h>

#include "SolarSystem.h"
#include "Ship.h"

class Controller {
	std::map<std::string, SolarSystem> starMap;
	Ship ship;
public:
	Controller(std::map<std::string, SolarSystem>&, Ship);
	void mainMenu();
	void SolarMenu();
	void ObjectMenu();
};

#endif