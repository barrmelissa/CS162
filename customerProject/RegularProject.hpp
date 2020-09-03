#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP
#include "CustomerProject.hpp"
#include <iostream>

class RegularProject : public CustomerProject
{
	public:
		RegularProject(double hours, double materials, double transportation);
		double billAmount();

};

#endif
