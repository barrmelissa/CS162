#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Shape* shapeA;
	Shape* shapeB;
	Shape* shapeC;

	Circle shape1(10);
	Rectangle shape2(5, 10);
	Square shape3(5);

	shape3.setLength(3);
	cout << shape3.area() << endl;
	cout << shape1.area() << endl;
	cout << shape2.area() << endl;
	
	return 0;

}
