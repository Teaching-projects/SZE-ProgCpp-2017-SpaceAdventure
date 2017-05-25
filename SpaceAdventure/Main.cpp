#include <iostream>

#include "MapGenerator.h"
#include "Ship.h"
#include "Controller.h"
#include <locale>

int main(int argc, char** argv) {

	setlocale(LC_ALL, "");

	std::map<std::string, SolarSystem> starMap;
	initMap iMap;

	std::map<std::string, int> eltaninMap;						//rendszerek szomszédjait tároló map-ek
	std::map<std::string, int> aviorMap;
	std::map<std::string, int> seginusMap;
	std::map<std::string, int> lesathMap;
	std::map<std::string, int> ogmaMap;
	std::map<std::string, int> napMap;


	eltaninMap["Avior"] = 20;									//map-ek feltöltése a szomszédok neveivel és az odajutás költségével
	aviorMap["Eltanin"] = 20;
	aviorMap["Seginus"] = 10;
	aviorMap["Lesath"] = 25;
	seginusMap["Ogma"] = 15;
	seginusMap["Avior"] = 10;
	lesathMap["Avior"] = 25;
	lesathMap["Nap"] = 22;
	ogmaMap["Seginus"] = 15;
	napMap["Lesath"] = 22;

	iMap["Eltanin"] = eltaninMap;								//map-ek betöltése a fõ inicializálást végrehajtó map-be
	iMap["Avior"] = aviorMap;
	iMap["Seginus"] = seginusMap;
	iMap["Lesath"] = lesathMap;
	iMap["Ogma"] = ogmaMap;
	iMap["Nap"] = napMap;


	starMap = MapGenerator::generateMap(iMap);					//objektumok randomizálása és rendszerek elhelyezése
	
	std::map<std::string, SolarSystem>& ref = starMap;
	Ship playerShip = Ship(100, 100, 100, 0, "Eltanin");

	Controller controller = Controller(ref, playerShip);

	controller.mainMenu();

	return 0;
}