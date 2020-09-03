#ifndef SHAPE2_HPP
#define SHAPE2_HPP
#include <iostream>
#include <string>

using namespace std;

class Shape
{
	public:
		virtual double area() = 0;
		virtual double perimeter() = 0;
};

#endif
