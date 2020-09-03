/*********************************************************************
 ** Author: Melissa Barr
 ** Date: October 18th, 2016
 ** Description: Assignment 6
 *********************************************************************/

#include "Point.hpp"
#include "Line.hpp"
#include <iostream>
using namespace std;


int main()
{
    Point p1(1.5, 1.0);
    Point p2(3.5, 4.0);
    double dist = p1.distanceTo(p2);
    cout << "Distance of line 1 = " << dist << endl;
    
    Point p3(1.5, 1.0);
    Point p4(3.5, 4.0);
    
    cout << "Distance of line 2 = " << p3.distanceTo(p4) << endl;
    
    
    // Try/Catch block
    try
    {
        Line line1(p1, p2);
        Line line2(p3, p4);
        
        double slope = line1.slope();
        cout << "Slope of line 1 = " << slope << endl;
        
        cout << "Slope of line 2 = " << line2.slope() << endl;
        

        Point intersectWith = line1.intersectWith(line1, line2);
        cout << "Intersection at (" << intersectWith.getXCoord() << "," << intersectWith.getYCoord() << ")" << endl;
        
    }
    // Catches degernerate line
    catch (Line::DegenerateLineException)
    {
        cout << "Degenerate line" << endl;
    }
    // Catches undefined slope
    catch (Line::UndefinedSlopeException)
    {
        cout << "Undefined slope" << endl;
    }
    // Catches parallel line
    catch (Line::ParallelLineException)
    {
        cout << "Parallel line" << endl;
    }
    
    
    return 0;
}
