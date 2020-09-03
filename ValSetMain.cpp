#include <iostream>
#include "ValSet.hpp"
using namespace std;

int main()
{
    // Create the class ValSet
    ValSet<char> mySet;
    
    // Add and remove values from ValSet
    mySet.add('A'); mySet.add('A');
    mySet.add('j');
    mySet.add('&');
    mySet.remove('j');
    mySet.add('#');
    
    // Copy mySet into a new ValSet, mySet2
    ValSet<char> mySet2 = mySet;
    
    // Add value to ValSet 2
    mySet2.add('B');
    mySet2.add('B');
    
    // Add value to ValSet 1
    mySet.add('C');
    mySet.add('C');
    mySet.add('C');
    
    // Transfer the ValSets into vectors so they can be displayed
    vector<char> myVec1 = mySet.getAsVector();
    vector<char> myVec2 = mySet2.getAsVector();
    
    //Display the vectors
    cout << "Vector 1: " << endl;
    for (int i = 0; i < myVec1.size(); i++)
        cout << myVec1[i] << endl;
    cout << endl << "Vector 2: " << endl;
    for (int i = 0; i < myVec2.size(); i++)
        cout << myVec2[i] << endl;
    
    //Check for select characters in mySet2
    cout << "Does mySet2 contain '&'? ";
    cout <<  mySet2.contains('&') << endl;
    cout << "Does mySet2 contain 'j'? ";
    cout <<  mySet2.contains('j') << endl;
    
    // Union ValSet test
    ValSet<char> unions = mySet.unionWith(mySet2);
    vector<char> unionVec = unions.getAsVector();
    cout << "All values in union: ";
    for (int i = 0; i < unionVec.size(); i++)
    {	cout << unionVec[i] << " ";}
    cout << endl;
    
    // Intersection ValSet test
    ValSet<char> intersects = mySet.intersectWith(mySet2);
    cout << "All intersection values: ";
    // Create a vector of intersect values to display
    vector<char> vecInts = intersects.getAsVector();
    // Display the Vector
    for (int i = 0; i < vecInts.size(); i++)
        cout << vecInts[i] << " ";
    cout << endl;
    
    // Symmetric Difference Test
    ValSet<char> diffs = mySet.symmDiffWith(mySet2);
    vector<char> vecDiffs = diffs.getAsVector();
    cout << "All symmetrically different values: ";
    for (int i = 0; i < vecDiffs.size(); i++)
        cout << vecDiffs[i] << " ";
    cout << endl;
    
    return 0;
}
