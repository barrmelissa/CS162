#ifndef CUSTOMER_PROJECT
#define CUSTOMER_PROJECT

class CustomerProject
{
    
protected:
    double hours;
    double transportCost;
    double materialCost;
    
public:
    CustomerProject(double hours,double transportCost, double materialCost);
    
    void setHours(double hours);
    void setTransportCost(double tCost);
    void setMaterialCost(double mCost);
    
    double getHours();
    double getTransportCost();
    double getMaterialCost();
    
    virtual double billAmount()=0;
    
};

#endif