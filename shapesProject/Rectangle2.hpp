#ifndef RECTANGLE2_HPP
#define RECTANGLE2_HPP
#include "Shape.hpp"
#include "Circle.hpp"
#include <iostream>

using namespace std;

class Rectangle : public Shape
{
	protected:
		double length;
		double width;
	public:
		Rectangle(double, double);
		void setLength(double);
		void setWidth(double);
		virtual double area();
		virtual double perimeter();
};

#endif
