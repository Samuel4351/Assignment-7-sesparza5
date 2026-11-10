//Samuel Esparza
//Due November 9, 2026

//FILE FUCNTION - 
//electric_field.cpp - Implements the Electric_Field class
//functions, including dynamic memory allocation, memory
//cleanup, getters, setters, magnitude calculation, and
//inner product calculation.





#include "electric_field.h"
#include <cmath>



//Default Constructor
Electric_Field::Electric_Field()
{
	E = new double[3];

	E[0] = 0;

	E[1] = 0;

	E[2] = 0;
}



//Constructor with 3 compenents 
Electric_Field::Electric_Field(double x, double y, double z)
{
	E = new double[3];

	E[0] = x;

	E[1] = y;

	E[2] = z;
}



//Destructor
Electric_Field::~Electric_Field()
{
	delete[] E;
}



//Setter Functions
void Electric_Field::setX(double x) { E[0] = x; }

void Electric_Field::setY(double y) { E[1] = y; }

void Electric_Field::setZ(double z) { E[2] = z; }



//Getter Functions
double Electric_Field::getX() const { return E[0]; }

double Electric_Field::getY() const { return E[1]; }

double Electric_Field::getZ() const { return E[2]; }



//Calculate Inner Product
double Electric_Field::calculateInnerProduct() const
{
	return E[0] * E[0] + E[1] * E[1] + E[2] *E[2];
}



//Calculate magnitude
double Electric_Field::calculateMagnitude() const
{
	return std::sqrt(calculateInnerProduct());
}




