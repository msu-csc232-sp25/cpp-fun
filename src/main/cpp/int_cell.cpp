#include "int_cell.h"

/**
 * Construct the IntCell with initialValue.
 */
IntCell::IntCell( int initialValue ) : storedValue{ initialValue }
{
    // intentionally empty
}

/**
 * Return the stored value.
 */
int IntCell::read( ) const 
{
    return storedValue;
}

/**
 * Store value.
 */
void IntCell::write( int value )
{
    storedValue = value;
}
