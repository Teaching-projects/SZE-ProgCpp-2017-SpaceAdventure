#include "Controller.h"

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
