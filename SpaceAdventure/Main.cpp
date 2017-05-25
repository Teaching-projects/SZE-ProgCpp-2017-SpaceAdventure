#include <iostream>

#include "MapGenerator.h"
#include "Ship.h"
#include "Controller.h"
#include <locale>

int main(int argc, char** argv) {

	setlocale(LC_ALL, "");

	std::map<std::string, SolarSystem> starMap;
	initMap iMap;

	std::map<std::string, int> eltaninMap;						//rendszerek szomsz�djait t�rol� map-ek
	std::map<std::string, int> aviorMap;
	std::map<std::string, int> seginusMap;
	std::map<std::string, int> lesathMap;
	std::map<std::string, int> ogmaMap;
	std::map<std::string, int> napMap;


	eltaninMap["Avior"] = 20;									//map-ek felt�lt�se a szomsz�dok neveivel �s az odajut�s k�lts�g�vel
	aviorMap["Eltanin"] = 20;
	aviorMap["Seginus"] = 10;
	aviorMap["Lesath"] = 25;
	seginusMap["Ogma"] = 15;
	seginusMap["Avior"] = 10;
	lesathMap["Avior"] = 25;
	lesathMap["Nap"] = 22;
	ogmaMap["Seginus"] = 15;
	napMap["Lesath"] = 22;

	iMap["Eltanin"] = eltaninMap;								//map-ek bet�lt�se a f� inicializ�l�st v�grehajt� map-be
	iMap["Avior"] = aviorMap;
	iMap["Seginus"] = seginusMap;
	iMap["Lesath"] = lesathMap;
	iMap["Ogma"] = ogmaMap;
	iMap["Nap"] = napMap;


	starMap = MapGenerator::generateMap(iMap);					//objektumok randomiz�l�sa �s rendszerek elhelyez�se
	
	std::map<std::string, SolarSystem>& ref = starMap;
	Ship playerShip = Ship(100, 100, 100, 0, "Eltanin");

	Controller controller = Controller(ref, playerShip);

	controller.mainMenu();

	return 0;
}