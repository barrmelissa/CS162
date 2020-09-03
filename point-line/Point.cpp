/*********************************************************************
 ** Author: Melissa Barr
 ** Date: October 18th, 2016
 ** Description: Assignment 6
 *********************************************************************/

#include "Point.hpp"
#include <cmath>

// Default constructor
Point::Point()
{
    setXCoord(0);
    setYCoord(0);
}

Point::Point(double X, double Y)
{
    setXCoord(X);
    setYCoord(Y);
}

// Sets X Coordinate
void Point::setXCoord(double X)
{
    XCoord = X;
}

// Sets Y Coordinate
void Point::setYCoord(double Y)
{
    YCoord = Y;
}

// Gets X Coordinate
double Point::getXCoord()
{
    return XCoord;
}

// Gets Y Coordinate
double Point::getYCoord()
{
    return YCoord;
}

// Gets the distance
double Point::distanceTo(const Point &pnt)
{
    return sqrt(pow((XCoord - pnt.XCoord), 2) + pow((YCoord - pnt.YCoord), 2));
}