#include "MyInteger.hpp"
#include <iostream>
#include <string>
using namespace std;

MyInteger::MyInteger(const MyInteger &obj)
{
    pInteger = new int;
    *pInteger = *obj.pInteger;
}
MyInteger MyInteger::operator=(const MyInteger &right)
{
    delete pInteger;
    pInteger = new int;
    *pInteger = *right.pInteger;
    return *this;
}
void MyInteger::setMyInt(int intIn)
{
    *pInteger = intIn;
}
int MyInteger::getMyInt() const
{
    return *pInteger;
}