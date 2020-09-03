#include "Circle.hpp"
#include "Shape.hpp"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(double radius)
{
	setRadius(radius);
}

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::area()
{
	return (3.14 * (radius * radius));
}

double Circle::perimeter()
{
	return (2 * (3.14 * radius));
}
