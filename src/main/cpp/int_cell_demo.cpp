
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

    IntCell* mPtr;
    mPtr = new IntCell{100};
    cout << "Cell (pointed to by) mPtr contents: " << mPtr->read() << "\n";
    cout << "Reseting that cell to 0...\n";
    mPtr->write( 0 );
    cout << "Cell (pointed to by) mPtr contents: " << mPtr->read() << "\n";

    delete mPtr;
    mPtr = nullptr;

    return EXIT_SUCCESS;
}
