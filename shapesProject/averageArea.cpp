#include "Shape.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include <iostream>
#include <vector>

using namespace std;

//Average area prototype
double averageArea(vector<Shape*>);

//Main function
/*int main()
{
	
	vector<Shape*> shapes;
	
	Shape* shapeA;
	Shape* shapeB;
	Shape* shapeC;

	Circle shape1(10);
	Rectangle shape2(5, 10);
	Square shape3(5);

	shape3.setLength(3);
	cout << shape3.area() << endl;
	
	shapeA = &shape1;
	shapeB = &shape2;
	shapeC = &shape3;
	
	shapes.push_back(shapeA);
        shapes.push_back(shapeB);
        shapes.push_back(shapeC);

	cout << "Average area of the shapes: " << averageArea(shapes) << endl;

	return 0;
}
*/
//Average area function
double averageArea(vector<Shape*> sh)
{
	//Declares the number of shapes
	int numOfShapes = sh.size();
	double area = 0.0;
	//If loop for averaging the area
	if(sh.size() == 0)
	{
		return 0;
	}
	else
	{
		//Takes the area at point i and iterates through the loop
		for(int i = 0; i<sh.size(); i++)
		{
			area += sh.at(i)->area();
		}
		//Returns the area divided by the amout of shapes in the vector
		return (area/sh.size());
	}

}
