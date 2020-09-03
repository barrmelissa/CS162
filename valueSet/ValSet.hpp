#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

template<class T>
class ValSet
{
public:
    T *array;
    int arraySize;
    int valuesInSet;
    
    //Default Constructor
    ValSet();
    //Copy Constructor
    ValSet(const ValSet<T> &);
    //Overloaded operator
    void operator = (const ValSet<T>&);
    //Destructor
    ~ValSet();
    int size();
    bool isEmpty();
    bool contains(T newT);
    void add(T newT);
    void remove(T newT);
    ValSet<T> unionWith(ValSet<T>);
    ValSet<T> intersectWith(ValSet<T>);
    ValSet<T> symmDiffWith(ValSet<T>);
    vector<T> getAsVector();
    
};
