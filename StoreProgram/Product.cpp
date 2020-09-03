#include "Product.hpp"
#include <iostream>
#include <string>
using namespace std;

Product::Product(string id, string t, string d, double p, int qa)
{
    idCode = id;
    title = t;
    description = d;
    price = p;
    quantityAvailable = qa;
}

string Product::getIdCode()
{
    return idCode;
}

string Product::getTitle()
{
    return title;
}

string Product::getDescription()
{
    return description;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantityAvailable()
{
    return quantityAvailable;
}

void Product::decreaseQuantity()
{
    
    //int nq;
    if(quantityAvailable>0)
    {
        quantityAvailable = (quantityAvailable - 1);
    }
    
    //int nq = (getQuantityAvailable - 1);
}