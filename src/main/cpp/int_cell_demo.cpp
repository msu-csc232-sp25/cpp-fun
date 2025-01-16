
#include <cstdlib>
#include <iostream>
#include "int_cell.h"

using std::cout;
using std::endl;

int main( )
{
    IntCell m1;
    IntCell m2{ 420 };

    cout << "Initially...\n";
    cout << "Cell m1 contents: " << m1.read( ) << "\n";
    cout << "Cell m2 contents: " << m2.read( ) << "\n";

    cout << "Writing new values to the cells...\n";
    m1.write( 5 );
    m2.write( m1.read( ) );
    cout << "Cell m1 contents: " << m1.read( ) << "\n";
    cout << "Cell m2 contents: " << m2.read( ) << "\n";
    cout << "They both should contain the value 5" << endl;

    return EXIT_SUCCESS;
}
