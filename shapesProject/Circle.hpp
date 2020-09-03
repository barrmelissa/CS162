#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Shape.hpp"
#include <iostream>

using namespace std;

//Derived Circle class from Shape class
class Circle : public Shape
{
	//Protected variables
	protected:
		double radius;
	//Public variables
	public:
		//Constructor
		Circle(double);
		void setRadius(double);
		virtual double area();
		virtual double perimeter();
};

#endif
