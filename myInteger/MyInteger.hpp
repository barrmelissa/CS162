#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP
#include <iostream>
using namespace std;

class MyInteger
{
	private:
		int *pInteger;
	public:
		MyInteger(int);
		~MyInteger();
		MyInteger(const MyInteger &);
		MyInteger operator=(const MyInteger &);
		void setMyInt(int);
		int getMyInt() const;
};

#endif		
