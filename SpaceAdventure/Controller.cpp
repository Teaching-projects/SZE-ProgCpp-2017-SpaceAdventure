#include "Controller.h"

Controller::Controller(std::map<std::string, SolarSystem>& map, Ship ship): starMap(map), ship(ship)
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

	while (!ok) {																											//�j bemenetet k�rek am�g nem �rv�nyes
		std::cin >> c;

		if (!c.compare("1")) {
			ok = true;
			SolarMenu();
		}
		else if (!c.compare("2") || !c.compare("q")) {
			ok = true;
		}
		else {
			std::cout << "\n" << "�rv�nytelen bemenet." << "\n";
		}
	}
}

void Controller::SolarMenu()
{
	if (!ship.getLocation().compare("Nap")) {																				//megn�zem c�lba �rt-e a j�t�kos
		std::cout << "\n" << "Gratul�lunk! Visszatal�lt a Naprendszerbe!" << "\n";
		std::cout << "�rjon be egy karaktert a kil�p�shez." << "\n";

		char c;
		std::cin >> c;
	}
	else {
		std::cout << "\n" << "Jelenleg a(z) " << ship.getLocation() << " rendszerben tart�zkodik." << "\n";
		std::cout << "Mit szeretne tenni?" << "\n\n";

		SolarSystem& s = starMap.at(ship.getLocation());
		std::map<std::string, int>& neighbours = s.getNeighbours();															//lek�rem az aktu�lis rendszer szomsz�djait

		int n = 0;
		std::vector<std::string> names;
		for (std::map<std::string, int>::iterator it = neighbours.begin(); it != neighbours.end(); it++) {					//v�gigiter�lok a szomsz�dokon
			names.push_back(it->first);																						//kigy�jt�m a neveket, hogy a v�laszt egyszer�bb legyen visszk�vetni
			std::cout << "\n" << n+1 << ": Ugr�s a(z) " << names[n] << " rendszerbe " << it->second << " k�lts�ggel.\n";
			n++;
		}

		bool ok = false;
		std::string str;
		int i = 0;
		while (!ok) {																										//bemenetek k�r�se am�g �rv�nytelenek
			std::cin >> str;

			if (!str.compare("q")) {
				ok = true;
			}
			else if (isdigit(str[0]) && ( (i=std::stoi(str)) > 0 ) && (i<=n)) {												//sz�m �rv�nyess�g vizsg�lata
				if (ship.jump(names[i-1], neighbours[names[i-1]])) {
					ok = true;
					SolarMenu();
				}
				else {
					std::cout << "\n" << "Nincs el�g nyersanyag az ugr�s v�grehajt�s�hoz." << "\n";
				}
			}
			else {
				std::cout << "\n" << "�rv�nytelen bemenet." << "\n";
			}
		}
	}
}
