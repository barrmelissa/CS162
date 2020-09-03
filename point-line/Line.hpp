/*********************************************************************
 ** Author: Melissa Barr
 ** Date: October 18th, 2016
 ** Description: Assignment 6
 *********************************************************************/

#ifndef LINE_HPP
#define LINE_HPP
#include "Point.hpp"
#include <string>

using namespace std;

// LineSegment class declaration
class Line
{
    // Declare variables
private:
    Point pnt1;
    Point pnt2;
    // Declare prototypes
public:
    Line(Point pnt1, Point pnt2);
    class DegenerateLineException
    {};
    const double close = 0.00001;
    void setPoint1(Point pnt);
    void setPoint2(Point pnt);
    Point getPoint1();
    Point getPoint2();
    //double length();
    double slope();
    double intersectX(Line, Line);
    double intersectY(Line, Line);
    class UndefinedSlopeException
    {};
    Point intersectWith(Line, Line);
    class ParallelLineException
    {};
};    

#endif