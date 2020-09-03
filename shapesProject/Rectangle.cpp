#include "Shape.hpp"
#include "Rectangle.hpp"
#include <iostream>

using namespace std;


//Constructor
Rectangle::Rectangle(double length, double width)
{
	setLength(length);
	setWidth(width);
}

//Set function
void Rectangle::setLength(double l)
{
	length = l;
}

//Set function
void Rectangle::setWidth(double w)
{
	width = w;
}

//Area function
double Rectangle::area()
{
	return (width * length);
}

//Perimeter function
double Rectangle::perimeter()
{
	return (2 * area());
}
