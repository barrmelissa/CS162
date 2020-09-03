#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include <iostream>

using namespace std;


//Constructor passing through Rectangle class
Square::Square(double length) : Rectangle(length, length)
{
	
}

//Overiding set function
void Square::setLength(double l)
{
	//Ensuring that it will stay a square
	length = l;
        width = l;
}

//Overiding set function
void Square::setWidth(double w)
{
	//Ensuring taht it will stay a square
	width = w;
	length = w;
}


