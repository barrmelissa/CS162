#include "ValSet.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

//Default Constructor
template<class T>
ValSet<T>::ValSet()
{
    array = new T[arraySize];
    arraySize = 10;
    valuesInSet = 0;
}

//Copy Constructor
template<class T>
ValSet<T>::ValSet(const ValSet<T> &copiedArray)//Do I need more than one parameter to be passed?
{
    array = new T[copiedArray.arraySize];
 
    arraySize = copiedArray.arraySize;
    valuesInSet = copiedArray.valuesInSet;
}

//Overloaded operator
template<class T>
void ValSet<T>::operator = (const ValSet<T> &index)
{
    
    array = new T[index.arraySize];

    arraySize = index.arraySize;
    valuesInSet = index.valuesInSet;
    
    //Returns an array element
    //return array[index];
}

//Destructor
template<class T>
ValSet<T>::~ValSet()
{
    delete[] array;
    arraySize = 0;
    valuesInSet = 0;
}

//Size function
template<class T>
int ValSet<T>::size()
{
    return valuesInSet;
}

//IsEmpty function
template<class T>
bool ValSet<T>::isEmpty()
{
    if(valuesInSet == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Contains function
template<class T>
bool ValSet<T>::contains(T newT)
{
    //Is this the right way to do the loop like would it return false always then?
    for(int i=0; i<valuesInSet; i++)
    {
        if(array[i] == newT)
        {
            return true;
            break;
        }
        return false;
    }
}

//Add function
template<class T>
void ValSet<T>::add(T newT)
{
    //Add a value if that value is not already in the ValSet
    if(contains(newT) == false)
    {
        //If array is currently full
        if(arraySize == valuesInSet)
        {
            //Increase the size of the array twice as large
            T *temp;
            temp = array;
            delete[] array;
            array = new T[arraySize*2];
            
            //Coping the contents
            memcpy(array, temp, sizeof(T)*valuesInSet);
            
        }
        array[valuesInSet] = newT;
        valuesInSet++;
    }
}

template<class T>
void ValSet<T>::remove(T newT)
{
    int i;
    int pos;
    if(contains(newT) == true)
    {
        for(i=0; i<valuesInSet; i++)
        {
            if(array[i] == newT)
            {
                pos = i;
                break;
            }
        }
        for(i=pos; i<valuesInSet; i++)
        {
            array[i] = array[i-1];
        }
        valuesInSet--;
    }
}

template<class T>
ValSet<T> ValSet<T>::unionWith(ValSet<T> a)
{
    ValSet<T> b;
    
    for(int i=0; i<size(); i++)
    {
        b.add(array[i]);
    }
    for(int j=0; j<size(); j++)
    {
        b.add(a.contains(array[j]));
    }
    return b;
}

template<class T>
ValSet<T> ValSet<T>::intersectWith(ValSet<T> a)
{
    
    ValSet<T> b;
    
    for(int i=0; i<size(); i++)
    {
        if(a.contains(array[i]))
        {
            b.add(array[i]);
        }
        return b;
    }
}

template<class T>
ValSet<T> ValSet<T>::symmDiffWith(ValSet<T> a)
{
    ValSet<T> b;

    for(int i=0; i<size(); i++)
    {
        for(int j=0; j<size(); i++)
        {
            
            if(contains(i) == true && a.contains(j) == false)
            {
                b.add(array[j]);
            }
        }
    }
    return b;
}

template<class T>
vector<T> ValSet<T>::getAsVector()
{
    vector<T> vector;
    for(int i=0; i<size(); i++)
    {
        vector.push_back(array[i]);
    }
    return vector;
}



