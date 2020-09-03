#include "CustomerProject.hpp"
#include "RegularProject.hpp"

RegularProject::RegularProject(double hours,double transportCost, double materialCost):CustomerProject(hours,transportCost, materialCost)
{
    
}

double RegularProject::billAmount()
{
    return materialCost+transportCost+80*hours;
}