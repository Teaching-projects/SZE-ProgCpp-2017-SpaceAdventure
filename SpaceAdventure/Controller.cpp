#include "Controller.h"

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
