#include <iostream>
#include "formulas.h"

int main()
{
    // computes the volume of a sphere of a given radius
    const double PI = 3.14159;
    double radius = 0.0;
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;
    double volume = volume_of_sphere(radius);
    std::cout << "The volume of a sphere of radius "
              << radius << " inches is "
              << volume << " cubic inches\n"
              << std::endl;
    return EXIT_SUCCESS;
}