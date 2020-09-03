#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Shape.hpp"

using namespace std;

//Derived class Rectangle from shape class
class Rectangle : public Shape
{
	//Protected
	protected:
		double length;
		double width;
	//Public
	public:
		//Constructor
		Rectangle(double, double);
		void setLength(double);
		void setWidth(double);
		virtual double area();
		virtual double perimeter();

};

#endif
