#include "CustomerProject.hpp"


CustomerProject::CustomerProject(double hours,double transportCost, double materialCost)
{
    setHours(hours);
    setTransportCost(transportCost);
    setMaterialCost(materialCost);
}

void CustomerProject::setHours(double hours)
{
    this->hours=hours;
}
void CustomerProject::setTransportCost(double tCost)
{
    this->transportCost=tCost;
    
}
void CustomerProject::setMaterialCost(double mCost)
{
    this->materialCost=mCost;
}

double CustomerProject::getHours()
{
    return hours;
}
double CustomerProject::getTransportCost()
{
    return transportCost;
}
double CustomerProject::getMaterialCost()
{
    return materialCost;
}