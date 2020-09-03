#include<iostream>

#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

using namespace std;

class Zombie

{
    
private:
    
    //Static variable, keeps track of how many zombie objects have been created
    static int allZombies;
    
public:
    
    //Constructor, it adds to static variable
    Zombie();
    
    //Destructor, it subtracts from the static variable
    ~Zombie();
    
    //Repeats what zombies say, prints out Braaainnnss!
    void speak();
    
    //Adds additional zombies
    void add();
    
    //Deletes zombies
    void del();
    
    int total();
    
};

#endif
