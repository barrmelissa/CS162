#ifndef PREFERRED_PROJECT
#define PREFERRED_PROJECT
#include "CustomerProject.hpp"
#include "RegularProject.hpp"

class PreferredProject : public CustomerProject
{
    
public:
    PreferredProject(double hours,double transportCost, double materialCost);
    virtual double billAmount();
};


#endif