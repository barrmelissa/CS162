#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>

using namespace std;

//Abstract class
class Shape
{
	public:
		//Virtual functions
		virtual double area() = 0;
		virtual double perimeter() = 0;
};

#endif
