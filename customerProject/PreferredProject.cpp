#include "PreferredProject.hpp"
#include "CustomerProject.hpp"
#include <iostream>
#include <cmath>

PreferredProject::PreferredProject(double hours, double materials, double transportation) : CustomerProject(hours, materials, transportation)
{

}

double PreferredProject::billAmount()
{
	return ((getMaterials() * 0.85) + (getTransportation() * 0.90) + (getHours() * 80)); 
//((materials * 0.85) + (transportation * 0.90) + (80 * fmin(100, hours)));
}
