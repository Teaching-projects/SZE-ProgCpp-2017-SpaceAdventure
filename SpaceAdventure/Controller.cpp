#include "Controller.h"

Controller::Controller(std::map<std::string, SolarSystem> map, Ship ship): starMap(map), ship(ship)
{
}

void Controller::mainMenu()
{
	std::cout << "Space Adventure" << "\n\n";

	std::cout << "Készítette: Kõhalmi Ádám" << "\n\n";

	std::cout << "A lehetõségek közül az elõttük lévõ szám beírásával választhat." << "\n";
	std::cout << "A játékból bármikor kiléphet a \'q\' karakter beírásával." << "\n\n";

	std::cout << "1: Új játék" << "\n";
	std::cout << "2: Kilépés" << "\n";

	bool ok = false;
	std::string c;

	while (!ok) {
		std::cin >> c;

		if (!c.compare("1") || !c.compare("2") || !c.compare("q")) {
			ok = true;
		}
		else {
			std::cout << "\n" << "Érvénytelen bemenet." << "\n";
		}
	}
	if (!c.compare("1"));
}

void Controller::SolarMenu()
{
	if (!ship.getLocation().compare("Nap")) {
		std::cout << "\n" << "Gratulálunk! Visszatalált a Naprendszerbe!" << "\n";
		std::cout << "Nyomjon ENTER-t a kilépéshez." << "\n";

		int c;
		std::cin >> c;
	}
	else {
		std::cout << "\n" << "Jelenleg a(z)" << ship.getLocation() << "rendszerben tartózkodik." << "\n";
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
