#include "CustomerProject.hpp"
#include "PreferredProject.hpp"
PreferredProject::PreferredProject(double hours,double transportCost, double materialCost):CustomerProject(hours,transportCost, materialCost)
{
    
}

//override the billAmount method
double PreferredProject::billAmount()
{
    if(hours<100)
        return .85*materialCost+.90*transportCost+80*hours;
    else
        return .85*materialCost+.90*transportCost;
};