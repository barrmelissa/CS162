#include "Customer.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Customer::Customer(string n, string a, bool pm)
{
    name = n;
    accountID = a;
    premiumMember = pm;
}

string Customer::getAccountID()
{
    return accountID;
}

vector<string> Customer::getCart()
{
    return cart;
}

bool Customer::isPremiumMember()
{
    bool status;
    
    if(premiumMember == true)
        status = true;
    else
        status = false;
    return status;
}

void Customer::addProductToCart(string id)
{
    cart.push_back(id);
}

void Customer::emptyCart()
{
    cart.clear();
    
    if(cart.empty())
        cout << "Your cart is empty" << endl;
}
