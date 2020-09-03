#include "CustomerProject.hpp"
#include "RegularProject.hpp"
#include "PreferredProject.hpp"
#include <iostream>

using namespace std;


int main()
{
    
    //Create an object of RegularProject
    RegularProject regularProject(10,200,2000);
    //calling bill method
    cout<<"Bill cost of Regular project : "<<regularProject.billAmount()<<endl;
    
    
    //Create an object of PreferredProject
    PreferredProject prefferedProject(10,200,2000);
    //calling bill method
    cout<<"Bill cost of Preferred project : "<<prefferedProject.billAmount()<<endl;
    
    system("pause");
    return 0;
}