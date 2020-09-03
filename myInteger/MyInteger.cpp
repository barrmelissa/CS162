#include "MyInteger.hpp"
#include <iostream>
#include <string>
using namespace std;


MyInteger::MyInteger(int num)
{
	pInteger = new int;
	setMyInt(num);
}

MyInteger::~MyInteger()
{
	delete pInteger;
}

MyInteger::MyInteger(const MyInteger &obj)
{
	pInteger = new int;
	*pInteger = *obj.pInteger;
}

MyInteger MyInteger::operator=(const MyInteger &right)
{
	*pInteger = *right.pInteger;
	return *this;
}

void MyInteger::setMyInt(int intnum)
{
	*pInteger = intnum;
}

int MyInteger::getMyInt() const
{
	return *pInteger;
}


