#include "CustomerProject.hpp"
#include <iostream>

CustomerProject::CustomerProject(double hours, double materials, double transportation)
{
	setHours(hours);
	setMaterials(materials);
	setTransportation(transportation);	
}

void CustomerProject::setHours(double h)
{
	hours = h;
}

void CustomerProject::setMaterials(double m)
{
	materials = m;
}

void CustomerProject::setTransportation(double t)
{
	transportation = t;
}

double CustomerProject::getHours()
{
	return hours;
}

double CustomerProject::getMaterials()
{
	return materials;
}

double CustomerProject::getTransportation()
{
	return transportation;
}
