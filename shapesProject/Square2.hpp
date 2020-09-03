#ifndef SQUARE2_HPP
#define SQUARE2_HPP
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>

using namespace std;

class Square : public Rectangle
{
	public:
		Square(double);
		void setLength(double);
		void setWidth(double);
};

#endif
