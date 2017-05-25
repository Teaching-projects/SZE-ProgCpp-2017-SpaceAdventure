#include "Controller.h"

Controller::Controller(std::map<std::string, SolarSystem> map, Ship ship): starMap(map), ship(ship)
{
}

void Controller::mainMenu()
{
	std::cout << "Space Adventure" << "\n\n";

	std::cout << "K�sz�tette: K�halmi �d�m" << "\n\n";

	std::cout << "A lehet�s�gek k�z�l az el�tt�k l�v� sz�m be�r�s�val v�laszthat." << "\n";
	std::cout << "A j�t�kb�l b�rmikor kil�phet a \'q\' karakter be�r�s�val." << "\n\n";

	std::cout << "1: �j j�t�k" << "\n";
	std::cout << "2: Kil�p�s" << "\n";

	bool ok = false;
	std::string c;

	while (!ok) {
		std::cin >> c;

		if (!c.compare("1") || !c.compare("2") || !c.compare("q")) {
			ok = true;
		}
		else {
			std::cout << "\n" << "�rv�nytelen bemenet." << "\n";
		}
	}
	if (!c.compare("1"));
}

void Controller::SolarMenu()
{
	if (!ship.getLocation().compare("Nap")) {
		std::cout << "\n" << "Gratul�lunk! Visszatal�lt a Naprendszerbe!" << "\n";
		std::cout << "Nyomjon ENTER-t a kil�p�shez." << "\n";

		int c;
		std::cin >> c;
	}
	else {
		std::cout << "\n" << "Jelenleg a(z)" << ship.getLocation() << "rendszerben tart�zkodik." << "\n";
		std::cout << "Mit szeretne tenni?" << "\n\n";

		int n = 0;
		SolarSystem s = starMap[ship.getLocation()];
		std::vector<SpaceObject> o = s.getObjects();
		std::map<std::string, int> neighbours = s.getNeighbours();

		for (std::vector<SpaceObject>::iterator it = o.begin(); it != o.end(); it++) {

		}

		for (std::map<std::string, int>::iterator it = neighbours.begin(); it != neighbours.end(); it++) {
			
		}
	}
}
