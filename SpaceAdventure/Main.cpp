#include <iostream>

#include "MapGenerator.h"
#include "Ship.h"
#include "Controller.h"
#include <locale>

int main(int argc, char** argv) {

	setlocale(LC_ALL, "");

	std::map<std::string, SolarSystem> starMap;
	initMap iMap;
	std::map<std::string, int> eltaninMap;
	std::map<std::string, int> aviorMap;
	std::map<std::string, int> seginusMap;
	std::map<std::string, int> lesathMap;
	std::map<std::string, int> ogmaMap;
	std::map<std::string, int> napMap;

	//std::string names[] = { "Eltanin", "Avior", "Seginus", "Lesath", "Ogma", "Nap" };

	eltaninMap["Avior"] = 20;
	aviorMap["Eltanin"] = 20;
	aviorMap["Seginus"] = 10;
	aviorMap["Lesath"] = 25;
	seginusMap["Ogma"] = 15;
	seginusMap["Avior"] = 10;
	lesathMap["Avior"] = 25;
	lesathMap["Nap"] = 22;
	ogmaMap["Seginus"] = 15;
	napMap["Lesath"] = 22;

	iMap["Eltanin"] = eltaninMap;
	iMap["Avior"] = eltaninMap;
	iMap["Seginus"] = eltaninMap;
	iMap["Lesath"] = eltaninMap;
	iMap["Ogma"] = eltaninMap;
	iMap["Nap"] = eltaninMap;


	starMap = MapGenerator::generateMap(iMap);

	Ship playerShip = Ship(100, 100, 100, 0, "Eltanin");

	Controller controller = Controller(starMap, playerShip);

	/*bool ok = false;
	char c;

	while (!ok) {
		std::cin >> c;

		if (c == '1') {
			ok = true;
		}
		else {
			std::cout << c;
		}
	}*/

	controller.mainMenu();
}