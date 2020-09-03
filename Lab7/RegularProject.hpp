#ifndef REGULAR_PROJECT
#define REGULAR_PROJECT
#include "CustomerProject.hpp"

class RegularProject : public CustomerProject
{
    
public:
    RegularProject(double hours,double transportCost, double materialCost);
    virtual double billAmount();
    
};

#endif