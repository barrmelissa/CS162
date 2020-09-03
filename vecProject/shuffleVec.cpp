#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;


template<class T>
void printVec(vector<T> vect)
{

        typename vector<T>::iterator iter;

		cout << "The elements in the vector are: "  << endl;
		for(iter = vect.begin(); iter != vect.end(); iter++)
		{
                	cout << *iter << endl;
		}

}

template<class T>
void shuffleVec(vector<T> &vect)
{

	srand(unsigned(time(0)));
        random_shuffle(vect.begin(), vect.end());

}

int main()
{
	vector<int> intVect;
	vector<int>::iterator iter;
	
	intVect.push_back(1);
	intVect.push_back(2);
	intVect.push_back(2);
	intVect.push_back(3);
	intVect.push_back(3);
	intVect.push_back(3);	

	cout << "The unshuffled values are: " << endl;
	printVec(intVect);
	cout << "The shuffled values are: " << endl;
	shuffleVec(intVect);
	printVec(intVect);
	cout << "The shuffled values again are: " << endl;
	shuffleVec(intVect);
	printVec(intVect);

	vector<double> doubleVect;
	
	doubleVect.push_back(1);
	doubleVect.push_back(2);
	doubleVect.push_back(2);
	doubleVect.push_back(3);
	doubleVect.push_back(3);
	doubleVect.push_back(3);

	cout << "The unshuffled values are: " << endl;
	printVec(doubleVect);

	return 0;
}
