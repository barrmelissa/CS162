#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Shape.hpp"
#include "Rectangle.hpp"
#include <iostream>

using namespace std;

//Derived class square from Rectangle class
class Square : public Rectangle
{
	//Public
	public:
		//Constructor
		Square(double);
		void setLength(double);
		void setWidth(double);	

};

#endif
