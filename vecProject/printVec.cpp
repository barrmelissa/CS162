#include <iostream>
//#include <class T>
#include <iomanip>
#include <vector>

using namespace std;

template<class T>
void printVec(T number)
{
	vector<T> vect;

	for(int i = 0; i < vect.size(); i++)
	{
		vect.push_back(i);
	}

	typename vector<T>::iterator iter = vect.at();

	while(iter != vect.end())
	{
	
		cout << "The elements in the vector are: " << *iter << endl;
		iter ++;
	}

}
