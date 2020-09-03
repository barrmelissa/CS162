/*********************************************************************
 ** Author: Melissa Barr
 ** Date: October 4th, 2016
 ** Description: Assignment 1
 This program converts decimal numbers to binary numbers and binary
 numbers to decimal numbers
 *********************************************************************/

#include <string>
#include <iostream>
using namespace std;

//Prototype functions
void bin2Dec(int, int, int);
void dec2Bin(int);

int main()
{
    
    bin2Dec(111010, 0, 0);
    
    cout << "The binary vaue is: " << "\n" << endl;

    dec2Bin(74);

//    int bNum;
//    
//    cout << "Enter the binary number \n";
//    cin >> bNum;
//    cout << "The binary number is " << bNum << "\n";
//    
//    bin2Dec (bNum, 0, 0);
    
//    int dNum;
//    cout << "Enter the decimal number \n";
//    cin >> dNum;
//    cout << "The decimal number is " << dNum << "\n";
//    
//    dec2Bin(dNum);
    
    return 0;
}

//Function that converts decimal to binary
void dec2Bin(int dNum)
{
    int remainder;
    remainder = dNum % 2;
    dNum = dNum/2;

    
    if(dNum > 0)
    {
        dec2Bin(dNum);
    }
    else if((dNum = 0))
    {
        return;
    }
    
    cout << remainder << endl;
}


//Function that converts binary to decimal
void bin2Dec(int bNum, int numTimes, int decNum)
{
    
    if (bNum == 0)
    {
        //cout << "The number of times thru the function is: " << numTimes << "\n";
        cout << "The decimal value is: " << decNum << "\n";
        return;
    }
    
    if ((bNum % 10) == 1)
        decNum = decNum + (1 << numTimes);
    numTimes++;
    
    bNum = bNum / 10;		//Adjusting for the next iteration
    
    bin2Dec(bNum, numTimes, decNum);
    
    return;
}

