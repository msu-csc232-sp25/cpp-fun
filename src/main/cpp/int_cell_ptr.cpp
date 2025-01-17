#include "int_cell_ptr.h"

/**
 * Construct the IntCell with initialValue.
 */
IntCell::IntCell( int initialValue ) : storedValue{ new int{ initialValue } }
{
    // intentionally empty
}

/**
 * Return the stored value.
 */
int IntCell::read( ) const 
{
    return *storedValue;
}

/**
 * Store value.
 */
void IntCell::write( int value )
{
    *storedValue = value;
}
