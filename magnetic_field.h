//Samuel Esparza
//Due November 9, 2026

//FILE FUCNTION - 
//magnetic_field.h - Defines the Magnetic_Field class and
//declares its constructors, destructor, getters, setters,
//magnitude calculation, and unit vector function.





#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H



class Magnetic_Field
{
private:
        double* B;

public:
        Magnetic_Field();
        Magnetic_Field(double x, double y, double z);
        ~Magnetic_Field();


        Magnetic_Field(const Magnetic_Field&) = delete;
        Magnetic_Field& operator = (const Magnetic_Field&) = delete;


        void setX(double x);

        void setY(double y);

        void setZ(double z);



        double getX() const;

        double getY() const;

        double getZ() const;



        double calculateMagnitude() const;
        bool calculateUnitVector(double unit[3]) const;
};





#endif
