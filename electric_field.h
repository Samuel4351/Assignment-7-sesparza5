//Samuel Esparza
//Due November 9, 2026

//FILE FUCNTION - 
//electric_field.h - Defines the Electric_Field class and
//declares its constructors, destructor, getters, setters,
//magnitude calculation, and inner product function.





#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H



class Electric_Field
{
private: 

	double* E;

public:

	Electric_Field();
	Electric_Field(double x, double y, double z);
	~Electric_Field();

	Electric_Field(const Electric_Field&) = delete;
	Electric_Field& operator = (const Electric_Field&) = delete;

	void setX(double x);
	void setY(double y);
	void setZ(double z);

	double getX() const;
	double getY() const;
	double getZ() const;

	double calculateMagnitude() const;
	double calculateInnerProduct() const;

};



#endif
