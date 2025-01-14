#include <iostream>     // std::cout, std::ostream, std::hex
#include <sstream>      // std::stringbuf
#include <string>       // std::string

const double PI = 3.14159;

double area_of_circle(double radius)
{
    return PI * radius * radius;
}

double volume_of_sphere(double radius)
{
    return 4.0 / 3.0 * PI * radius * radius * radius;
}

enum {SUN, MON, TUE, WED, THU, FRI, SAT};
/*
 * the above is the equivalent of 

const int SUN = 0;
const int MON = 1;
...
const int SUN = 6;

 */


/* We can create an integral data type by naming an enumeration */
enum Season{WINTER, SPRING, SUMMER, FALL};

std::string season_to_str(Season season)
{
    std::string str;

    switch(season)
    {
        case WINTER:
            str.append("winter");
            break;
        case SPRING:
            str.append("spring");
            break;
        case SUMMER:
            str.append("summer");
            break;
        case FALL:
            str.append("fall");
    }
    return str;
}

// We use the typedef statement to give another name to an existing data type.
typedef double REAL;

// parameter passing mechanisms
// pass by value
int max_of(int x, int y)
{
    return (x > y) ? x : y;
}

// pass by reference
void compute_max(int x, int y, int& larger)
{
    larger = (x > y) ? x : y;
}

// pass by constant ref
void print_message(const std::string& message)
{
    std::cout << message;
}
