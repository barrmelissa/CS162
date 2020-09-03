#include "Shape.hpp"
#include "Circle.hpp"
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

//Constructor
Circle::Circle(double radius)
{
	setRadius(radius);
}

//Set function
void Circle::setRadius(double r)
{
	radius = r;
}

//Area function
double Circle::area()
{
	return (M_PI * (pow(radius, 2)));
}

//Perimeter function
double Circle::perimeter()
{
	return (2 * (M_PI) * (radius)); 
}
