/*********************************************************************
 ** Author: Melissa Barr
 ** Date: October 18th, 2016
 ** Description: Assignment 6
 *********************************************************************/

#include "Line.hpp"
#include <iostream>
#include <cmath>
using namespace std;

// Constructor
Line::Line(Point pnt1, Point pnt2)
{
    setPoint1(pnt1);
    setPoint2(pnt2);
    if (pnt1.distanceTo(pnt2) <= close)
        throw DegenerateLineException();
}

// Set endpoint1
void Line::setPoint1(Point pnt)
{
    pnt1 = pnt;
}

// Set endpoint2
void Line::setPoint2(Point pnt)
{
    pnt2 = pnt;
}

// Get endpoint1
Point Line::getPoint1()
{
    return pnt1;
}

// Get endpoint2
Point Line::getPoint2()
{
    return pnt2;
}

// Slope function, reterns slope
double Line::slope()
{
    // Throws exception if the slope is undefined
    if(abs(pnt1.getXCoord() - pnt2.getXCoord()) <= close)
        throw UndefinedSlopeException();
    else
        return (pnt2.getYCoord()-pnt1.getYCoord())/(pnt2.getXCoord()-pnt1.getXCoord());
}

// Intersect function, returns the intersection of the two lines
Point Line::intersectWith(Line line1, Line line2)
{
    // Throws exception if the two lines are parallel
    if((abs(slope() - line2.slope())) <= close)
        throw ParallelLineException();
    else
        // Calls intersectX and intersectY function which calculates the intersection
        return Point(intersectX(line1, line2) , intersectY(line1, line2));
    
}

// Finds the X value of the intersection
double Line::intersectX(Line line1, Line line2)
{
    return ((pnt2.getYCoord() - (slope()) * pnt2.getXCoord()) - (pnt1.getYCoord() - (slope()) * pnt1.getXCoord())) / (line1.slope() - line2.slope());
    
    
}

// Finds the Y value of the intersection
double Line::intersectY(Line line1, Line line2)
{
    return ((line1.slope() * intersectX(line1, line2)) + (pnt1.getYCoord() - (slope()) * pnt1.getXCoord()));
}













