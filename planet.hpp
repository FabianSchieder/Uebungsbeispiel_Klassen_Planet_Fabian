#pragma once
#include <iostream>
using namespace std;

class Planet
{
private:
	string radius;
	bool habitable;
	float gravitation;
	string inhabitans;
	string name;

public:
	Planet(string name, string radius, bool habitable, float gravitation, string inhabitans);

	void inhabitate(string inhabitans);
	void setRadius(string radius);
	void setGravitation(float gravitation);
	void printInformation();
};
