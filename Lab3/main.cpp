#include<iostream>

#include <vector>

#include "Zombie.hpp"

using namespace std;

void start();

int main()

{
    
    char choice;
    int size;
    
    //Creates a vector of Zombie pointers
    vector<Zombie*>zom;
    
    do
        
    {
        
        start();
        
        cin >>choice;
        
        switch(choice)
        
        {
                
            case 'A': cout << "Zombie created" <<endl;
                
                //Creates and puts new Zombie in vector
                zom.push_back(new Zombie);
                
                break;
                
            case 'B': if(zom.empty())
                
                cout << "There are no Zombies to kill" <<endl;
                
            else
                
            {
                
                size =zom.size();
                
                delete zom[size-1];
                
                zom.pop_back();
                
                cout << "Zombie killed" <<endl;
                
            }
                
                
                
            case 'C': if(zom.empty())
                
                cout << "There are 0 Zombies" <<endl;
                
            else
                
            {
                
                size =zom.size();
                
                cout << "There are " <<zom[size-1]->total() << " Zombies." <<endl;
                
            }
                
                break;
                
            case 'D':
                
                if(zom.empty())
                    
                    cout << "There are no Zombies" <<endl;
                
                else
                {
                    size =zom.size();
                
                    for(int i = 0; i<size; i++)
                    
                        zom[i] ->speak();
                }
                break;
                
        }
        
    }while (choice != 'E');
    
    cout << "Game quit" <<endl;
    
    return 0;
    
}

void start()

{
    
    cout << "Start:" <<endl;
    
    cout << "A. Create a Zombie" <<endl;
    
    cout << "B. Destroy a Zombie" <<endl;
    
    cout << "C. Number of existing Zombies" <<endl;
    
    cout << "D. Tell all zombies to speak" <<endl;
    
    cout << "E. Quit" <<endl;
    
    cout << "Choice: ";
    
}