#include "Controller.h"

Controller::Controller(std::map<std::string, SolarSystem>& map, Ship ship): starMap(map), ship(ship)
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

		if (!c.compare("1")) {
			ok = true;
			SolarMenu();
		}
		else if (!c.compare("2") || !c.compare("q")) {
			ok = true;
		}
		else {
			std::cout << "\n" << "Érvénytelen bemenet." << "\n";
		}
	}
}

void Controller::SolarMenu()
{
	if (!ship.getLocation().compare("Nap")) {
		std::cout << "\n" << "Gratulálunk! Visszatalált a Naprendszerbe!" << "\n";
		std::cout << "Írjon be egy karaktert a kilépéshez." << "\n";

		char c;
		std::cin >> c;
	}
	else {
		std::cout << "\n" << "Jelenleg a(z) " << ship.getLocation() << " rendszerben tartózkodik." << "\n";
		std::cout << "Mit szeretne tenni?" << "\n\n";

		//char c;
		//std::cin >> c;

		SolarSystem& s = starMap.at(ship.getLocation());
		std::map<std::string, int>& neighbours = s.getNeighbours();
		//std::vector<SpaceObject> o = s.getObjects();

		//for (std::vector<SpaceObject>::iterator it = o.begin(); it != o.end(); it++) {

		//}

		int n = 0;
		//int size = neighbours.size;
		//std::string* names= new std::string[size];
		std::vector<std::string> names;
		for (std::map<std::string, int>::iterator it = neighbours.begin(); it != neighbours.end(); it++) {
			names.push_back(it->first);
			std::cout << "\n" << n+1 << ": Ugrás a(z) " << names[n] << " rendszerbe " << it->second << " költséggel.\n";
			n++;
		}

		bool ok = false;
		std::string str;
		int i = 0;
		while (!ok) {
			std::cin >> str;

			if (!str.compare("q")) {
				ok = true;
			}
			else if (isdigit(str[0]) && ( (i=std::stoi(str)) > 0 ) && (i<=n)) {
				if (ship.jump(names[i-1], neighbours[names[i-1]])) {
					ok = true;
					SolarMenu();
				}
				else {
					std::cout << "\n" << "Nincs elég nyersanyag az ugrás végrehajtásához." << "\n";
				}
			}
			else {
				std::cout << "\n" << "Érvénytelen bemenet." << "\n";
			}
		}
		//delete[] names;*/
	}
}
