#include <iostream>
#include "Logger\Logger.h"

int main() {
	SLog::Logger l("Klasa");
	l.dodajKlase("Test");
	std::cout << l.napis().c_str();
}
