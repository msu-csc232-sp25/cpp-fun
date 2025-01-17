#include <iostream>
#include "int_cell_ptr_big_five.h"

using std::cout;
using std::endl;

int f( )
{
    IntCell a{ 2 };
    IntCell b = a;
    IntCell c;

    c = b;
    a.write( 4 );
    cout << a.read( ) << endl << b.read( ) << endl << c.read( ) << endl;
    cout << "Only the first one should be 4!" << endl;

    return 0;
}

int main( )
{
    return f( );
}