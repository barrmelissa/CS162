#ifndef CIRCLE2_HPP
#define CIRCLE2_HPP
#include "Shape.hpp"
#include <iostream>
#include <string>

using namespace std;

class Circle : public Shape
{
	protected:
		double radius;
	public:
		Circle(double);
		void setRadius(double);
		virtual double area();
		virtual double perimeter();
};

#endif
