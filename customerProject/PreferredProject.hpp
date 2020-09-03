#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP
#include "CustomerProject.hpp"

class PreferredProject : public CustomerProject
{
	public:
		PreferredProject(double hours, double materials, double transportation);

		virtual double billAmount();
};

#endif

