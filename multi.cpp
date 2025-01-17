#include <iostream>
#include "utils.h"

int main()
{
    // computes the volume of a sphere of a given radius
    double radius = 0.0;
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;
    double volume = volume_of_sphere(radius);
    std::cout << "The volume of a sphere of radius "
              << radius << " inches is "
              << volume << " cubic inches\n"
              << std::endl;

    // now for something completely different
    std::cout << "Don't you just love " << season_to_str(WINTER) << "?\n";
    std::cout << "Or do you prefer " << FALL << "?\n";
    return EXIT_SUCCESS;
}