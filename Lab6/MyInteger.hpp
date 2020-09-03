#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP
#include <iostream>
using namespace std;

class MyInteger
{
private:
    int *pInteger;
public:
    void setMyInt(int);
    int getMyInt() const;
    MyInteger operator=(const MyInteger &);
    
    MyInteger(const MyInteger &);
    MyInteger(int inNum)
    {
        pInteger = new int;
        setMyInt(inNum);
    }
    ~MyInteger()
    {
        delete pInteger;
    }
    
};
#endif