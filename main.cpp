nclude "Store.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string idCode = "j3k20";
    string description;
    string title = "Title";
    double price = 3.50;
    int quantityAvailable = 4;
    //Product b1("123", "War and Peace", "Tolstoy", "3.5", "4");
    
    string name;
    string accountID = "h97j0";
    
    Product *p;
    Store str;
    str.addProduct(p);
    str.checkOutMember(accountID);
    str.addProductToMemberCart(idCode, accountID);
    
    str.productSearch(idCode);
    
    return 0;
}
