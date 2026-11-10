//Samuel Esparza
//Due November 9, 2026

//FILE FUCNTION - 
//magnetic_field.cpp - Implements the Magnetic_Field class
//functions, including dynamic memory allocation, memory
//cleanup, getters, setters, magnitude calculation, and
//unit vector calculation.





#include "magnetic_field.h"
#include <cmath>




//Default Constructor
Magnetic_Field::Magnetic_Field()
{
	B = new double[3];

	B[0] = 0;

	B[1] = 0;

	B[2] = 0;
}



//Constructor with 3 Components
Magnetic_Field::Magnetic_Field(double x, double y, double z)
{
	B = new double[3];

	B[0] = x;

	B[1] = y;

	B[2] = z;
}



//Destructor
Magnetic_Field::~Magnetic_Field()
{
	delete[] B;
}



//Setter Functions
void Magnetic_Field::setX(double x) { B[0] = x; }

void Magnetic_Field::setY(double y) { B[1] = y; }

void Magnetic_Field::setZ(double z) { B[2] = z; }



//Getter Functions
double Magnetic_Field::getX() const { return B[0]; }

double Magnetic_Field::getY() const { return B[1]; }

double Magnetic_Field::getZ() const { return B[2]; }




//Calculate Magnitude
double Magnetic_Field::calculateMagnitude() const
{
	return std::sqrt(B[0] * B[0] + B[1] * B[1] + B[2] *B[2]);
}



//Calculate Unit Vector
bool Magnetic_Field::calculateUnitVector(double unit[3]) const
{
	const double magnitude = calculateMagnitude();

	if (magnitude == 0)
	{
		return false;
	}


	unit[0] = B[0] / magnitude;
	unit[1] = B[1] / magnitude;
	unit[2] = B[2] / magnitude;



	return true;
}



