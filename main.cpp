//Samuel Esparza
//Due November 9, 2026

//Description - 
//This program uses C++ classes to manage three-dimensional
//electric and magnetic fields. It dynamically allocates memory
//for the x, y, and z components of each field. The program
//calculates field magnitudes, the electric field inner product,
//and the magnetic field unit vector.

//FILE FUCNTION - 
//Creates and tests electric and magnetic field
//objects using constructors, getters, and setters. It also
//displays the calculated results.

//HOW TO USE PROGRAM -
//Compile using:
//g++ -std=c++17 -Wall -Wextra -pedantic main.cpp electric_field.cpp magnetic_field.cpp -o lab7

//Compilation Command Explanation:
// g++                 - C++ compiler used to compile the program.
// -std=c++17          - Uses the C++17 programming standard.
// -Wall               - Enables common compiler warnings.
// -Wextra             - Enables additional compiler warnings.
// -pedantic           - Checks for strict C++ standard compliance.
// main.cpp            - Contains the main function that runs the program.
// electric_field.cpp  - Contains the electric field function definitions.
// magnetic_field.cpp  - Contains the magnetic field function definitions.
// -o lab7             - Names the compiled executable file "lab7".

//Run using:
// ./lab7











#include <iostream>
#include <iomanip>
#include "electric_field.h"
#include "magnetic_field.h"






int main()
{
	// Create objects using default constructors
    Electric_Field E_default;
    Magnetic_Field B_default;



    // Create objects using component constructors
    Electric_Field E_components(1e5, 10.9, 1.7e2);
    Magnetic_Field B_components(0.0, 3.0, 4.0);



    // Set electric field components
    E_default.setX(3.0);
    E_default.setY(4.0);
    E_default.setZ(0.0);



    // Set magnetic field components
    B_default.setX(0.0);
    B_default.setY(0.0);
    B_default.setZ(2.0);

    std::cout << std::fixed << std::setprecision(3);



    // Electric field using default constructor
    std::cout << "E_default components: ("
              << E_default.getX() << ", "
              << E_default.getY() << ", "
              << E_default.getZ() << ")\n";

    std::cout << "E_default magnitude: "
              << E_default.calculateMagnitude() << " N/C\n";

    std::cout << "E_default inner product E dot E: "
              << E_default.calculateInnerProduct()
              << " (N/C)^2\n\n";

    // Electric field using component constructor
    std::cout << "E_components components: ("
              << E_components.getX() << ", "
              << E_components.getY() << ", "
              << E_components.getZ() << ")\n";

    std::cout << "E_components magnitude: "
              << E_components.calculateMagnitude() << " N/C\n";

    std::cout << "E_components inner product E dot E: "
              << E_components.calculateInnerProduct()
              << " (N/C)^2\n\n";


    // Array to hold magnetic field unit vector
    double unit[3];



    // Magnetic field using default constructor
    std::cout << "B_default components: ("
              << B_default.getX() << ", "
              << B_default.getY() << ", "
              << B_default.getZ() << ")\n";

    std::cout << "B_default magnitude: "
              << B_default.calculateMagnitude() << " T\n";

    if (B_default.calculateUnitVector(unit))
    {
        std::cout << "B_default unit vector: ("
                  << unit[0] << ", "
                  << unit[1] << ", "
                  << unit[2] << ")\n\n";
    }
    else
    {
        std::cout << "B_default unit vector: undefined for zero vector\n\n";
    }



    // Magnetic field using component constructor
    std::cout << "B_components components: ("
              << B_components.getX() << ", "
              << B_components.getY() << ", "
              << B_components.getZ() << ")\n";

    std::cout << "B_components magnitude: "
              << B_components.calculateMagnitude() << " T\n";

    if (B_components.calculateUnitVector(unit))
    {
        std::cout << "B_components unit vector: ("
                  << unit[0] << ", "
                  << unit[1] << ", "
                  << unit[2] << ")\n";
    }
    else
    {
        std::cout << "B_components unit vector: undefined for zero vector\n";
    }

    return 0;
}

