#include "RegularProject.hpp"
#include "PreferredProject.hpp"
#include <iostream>
using namespace std;

int main()
{
	CustomerProject* projectA;
	CustomerProject* projectB;
	
	RegularProject project1(5, 200, 10);
	PreferredProject project2(5, 200, 10);

	projectA = &project1;
	projectB = &project2;

	cout << "Bill cost of regular project: " <<  projectA->billAmount() << endl;
	cout << "Bill cost of preferred project: " << projectB->billAmount() << endl;

	return 0;
}
