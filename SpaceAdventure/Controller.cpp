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

	while (!ok) {																											//új bemenetet kérek amíg nem érvényes
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
	if (!ship.getLocation().compare("Nap")) {																				//megnézem célba ért-e a játékos
		std::cout << "\n" << "Gratulálunk! Visszatalált a Naprendszerbe!" << "\n";
		std::cout << "Írjon be egy karaktert a kilépéshez." << "\n";

		char c;
		std::cin >> c;
	}
	else {
		std::cout << "\n" << "Jelenleg a(z) " << ship.getLocation() << " rendszerben tartózkodik." << "\n";
		std::cout << "Mit szeretne tenni?" << "\n\n";

		SolarSystem& s = starMap.at(ship.getLocation());
		std::map<std::string, int>& neighbours = s.getNeighbours();															//lekérem az aktuális rendszer szomszédjait

		int n = 0;
		std::vector<std::string> names;
		for (std::map<std::string, int>::iterator it = neighbours.begin(); it != neighbours.end(); it++) {					//végigiterálok a szomszédokon
			names.push_back(it->first);																						//kigyûjtöm a neveket, hogy a választ egyszerûbb legyen visszkövetni
			std::cout << "\n" << n+1 << ": Ugrás a(z) " << names[n] << " rendszerbe " << it->second << " költséggel.\n";
			n++;
		}

		bool ok = false;
		std::string str;
		int i = 0;
		while (!ok) {																										//bemenetek kérése amíg érvénytelenek
			std::cin >> str;

			if (!str.compare("q")) {
				ok = true;
			}
			else if (isdigit(str[0]) && ( (i=std::stoi(str)) > 0 ) && (i<=n)) {												//szám érvényesség vizsgálata
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
	}
}
