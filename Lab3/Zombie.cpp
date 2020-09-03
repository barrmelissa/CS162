#include<iostream>

#include <vector>

#include "Zombie.hpp"

using namespace std;

int Zombie::allZombies;

Zombie::Zombie()

{
    add();
    cout << "Number of Zombies = " << allZombies << "\n" << endl;
}

Zombie::~Zombie()

{
    del();
    cout << "Number of Zombies = " << allZombies << "\n" << endl;
}

void Zombie::speak()

{
    
    cout <<"Braaaainss!" <<endl;
    
}

void Zombie::add()

{
    
    allZombies++;
    
}

void Zombie::del()

{
    
    allZombies--;
    
}

int Zombie::total()

{
    
    return allZombies;
    
}