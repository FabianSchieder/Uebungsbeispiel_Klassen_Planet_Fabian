#include <iostream>
#include "planet.h"
using namespace std;

int main()
{
	Planet earth("Erde", "12k km", true, 9.81f, "8 Mrd.");
	earth.printInformation();

	cout << endl;

	Planet mars("Mars", "1 km", false, 1.0f, "100");
	mars.printInformation();

	cout << endl;
	
	mars.setRadius("3.389 km");
	mars.setGravitation(3.71f);
	mars.inhabitate("0");

	mars.printInformation();

	return 0;
}
