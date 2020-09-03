#include "Square.hpp"
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>

using namespace std;

Square::Square(double length) : Rectangle(length, length)
{
	
}

void Square::setLength(double l)
{
	length = l;
	width = l;
}

void Square::setWidth(double w)
{
	width = w;
	length = w;
}
