#include "RegularProject.hpp"
#include "CustomerProject.hpp"
#include <iostream>

RegularProject::RegularProject(double hours, double materials, double transportation) : CustomerProject(hours, materials, transportation)
{

}

double RegularProject::billAmount()
{
	return ((getHours()*80) + getMaterials() + getTransportation()); 
//(materials + transportation + (80 * hours));
}
