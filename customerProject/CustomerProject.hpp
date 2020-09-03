#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP
#include <iostream>

class CustomerProject
{
	protected:
		double hours;
		double materials;
		double transportation;
	public:
		CustomerProject(double hours, double materials, double transportation);
		virtual double billAmount() = 0;
		void setHours(double h);
		void setMaterials(double m);
		void setTransportation(double t);
		double getHours();
		double getMaterials();
		double getTransportation();
		
};

#endif
