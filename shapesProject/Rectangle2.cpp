#include "Rectangle.hpp"
#include "Shape.hpp"
#include "Circle.hpp"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double length, double width)
{
	setLength(length);
	setWidth(width);
}

void Rectangle::setLength(double l)
{
	length = l;	
}

void Rectangle::setWidth(double w)
{
	width = w;
}

double Rectangle::area()
{
	return (width * length);
}

double Rectangle::perimeter()
{
	return (2 * (length + width));
}
