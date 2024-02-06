#include <iostream>
#include "planet.h"

Planet::Planet(string name, string radius, bool habitable, float gravitation, string inhabitans)
{
	this->name = name;
	this->radius = radius;
	this->habitable = habitable;
	this->gravitation = gravitation;
	this->inhabitans = inhabitans;
}

void Planet::inhabitate(string ingabitans)
{
	this->inhabitans = inhabitans;
}

void Planet::setRadius(string radius)
{
	this->radius = radius;
}

void Planet::setGravitation(float gravitation)
{
	this->gravitation = gravitation;
}

void Planet::printInformation()
{
	cout << "Name: " << name << endl;
	cout << "Radius: " << radius << endl;
	cout << "Bewohnbar: ";

	if (habitable)
	{
		cout << "Ja" << endl;
	}
	else
	{
		cout << "Nein" << endl;
	}
	
	cout << "Bewohner: " << inhabitans << endl;
	cout << "Gravitation: " << gravitation << " m/s^2" << endl;
}
