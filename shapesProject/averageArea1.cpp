#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include <iostream>
#include <vector>

using namespace std;

double averageArea(vector<*Shape>);

double averageArea(vector<*Shape> sh)
{
	int numOfShapes = sh.size();
	double area = 0.0;

	if(sh.size() == 0)
	{
		return 0;
	}
	else
	{
		for(int i=0; i<sh.size(); i++)
		{
			area += sh.at(i)->area();
		}
		return (area/sh.size());
	}
		
}
