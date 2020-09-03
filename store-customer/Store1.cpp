#include "Store.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void Store::addProduct(Product* p)
{
    inventory.push_back(p);
}

void Store::addMember(Customer* c)
{
    members.push_back(c);
}

Product* Store::getProductFromID(string pID)
{
    for(int i=0; i<inventory.size(); i++)
    {
        Product* p = inventory[i];
        if(p->getIdCode() == pID)
            return p;
        //Change to p1 maybe?
    }
    return NULL;
}

Customer* Store::getMemberFromID(string cID)
{
    for(int i=0; i<members.size(); i++)
    {
        Customer* c = members[i];
        if(c->getAccountID() == cID)
            return c;
        //Change to c1 maybe?
    }
    return NULL;
}

void Store::productSearch(string str)
{
    
    string s1;
    string s2;
    for (int i=0; i<inventory.size(); i++)
    {
        s1 = inventory.at(i)->getTitle();
        s2 = inventory.at(i)->getDescription();
        if(s1.find(str) != string::npos)
        {
            cout << "Title: " << inventory.at(i)->getTitle() << endl;
            cout << "ID Code: " << inventory.at(i)->getIdCode() << endl;
            cout << "Price: " << inventory.at(i)->getPrice() << endl;
           cout << "Description: " << inventory.at(i)->getDescription() << endl;
        }
        else if(s1.find(str) != string::npos)
        {
            cout << "Title: " << inventory.at(i)->getTitle() << endl;
            cout << "ID Code: " << inventory.at(i)->getIdCode() << endl;
            cout << "Price: " << inventory.at(i)->getPrice() << endl;
            cout << "Description: " << inventory.at(i)->getDescription() << endl;
        }
    }
    
}

void Store::addProductToMemberCart(string pID, string mID)
{
    int k,j,c = 0;
    for (int i=0; i<inventory.size(); i++)
    {
        if(inventory.at(i)->getIdCode() == pID)
        {
            k++;
            j = i;
        }
        
    }
    if(k==0)
    {
        cout << "Product # " << pID << " not found." << endl;
        return;
    }

    
    k = 0;
    for(int i=0; i<members.size(); i++)
    {
        if(members.at(i)->getAccountID() == mID)
        {
            k++;
            c = i;
        }
    }
    if(k==0)
    {
      cout << "Member # " << mID << " not found." << endl;
        return;
    }
    
    if(inventory.at(j)->getQuantityAvailable() > 0)
    {
        members.at(c)->addProductToCart(pID);
    }
    else
    {
        cout << "Sorry, product # " << pID << " is currently out of stock." << endl;
    }
    
}

void Store::checkOutMember(string mID)
{
    
    Customer* current_member = NULL;
    
    for(int i = 0; i < members.size(); i++)
    {
        if(members.at(i)->getAccountID() == mID)
        {
            current_member = members.at(i);
        }
    }
    if(current_member == NULL)
    {
        cout << "Member # " << mID << " not found." << endl;
        return;
    }
    
    if(current_member != NULL)
    {
        current_member->getCart();
        for(int i=0; i<inventory.size(); i++)
        {
            cout << "Title: " << inventory.at(i)->getTitle() << endl;
            cout << "Price: " << inventory.at(i)->getPrice() << endl;
            inventory.at(i)->decreaseQuantity();
        }
    }
    
    if(current_member->getCart().empty())
    {
            cout << "There are no items in the cart." << endl;
    }

    
    for(int i=0; i<inventory.size(); i++)
    {
        if(inventory.at(i)->getQuantityAvailable() == 0)
        {
            cout << "Sorry, product # " << inventory.at(i)->getIdCode() << "," << inventory.at(i)->getTitle() << "," << " is no longer available." << endl;
        }
    }
    
    
    if(current_member->isPremiumMember() == true)
    {
        int sum = 0;
        current_member->getCart();
        for(int i=0; i<inventory.size(); i++)
        {
            sum += inventory.at(i)->getPrice();
        }
        cout << "Subtotal: " << sum << endl;
        cout << "Shipping Cost: $0" << endl;
        cout << "Total: " << sum << endl;
    }
    else
    {
        int sum = 0;
        current_member->getCart();
        for(int i=0; i<inventory.size(); i++)
        {
            sum += inventory.at(i)->getPrice();
        }
        cout << "Subtotal: " << sum << endl;
        cout << "Shippting Cost: " << (0.07*sum) << endl;
        cout << "Total: " << (sum + (0.07*sum)) << endl;
    }
    current_member->getCart().clear();
}
