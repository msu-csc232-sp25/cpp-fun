#include "int_cell_ptr_big_five.h"

/**
 * Construct the IntCell with initialValue.
 */
IntCell::IntCell( int initialValue ) : storedValue{ new int{ initialValue } }
{
    // intentionally empty
}

/**
 * Destructor
 */
IntCell::~IntCell( )
{
    delete storedValue;
}

/**
 * Copy constructor
 */
IntCell::IntCell( const IntCell& rhs ) : storedValue{ new int{ *rhs.storedValue } }
{

}

/**
 * Move constructor
 */
IntCell::IntCell( IntCell && rhs ) : storedValue{ rhs.storedValue }
{
    rhs.storedValue = nullptr;
}

/**
 * Copy assignment operator
 */
IntCell & IntCell::operator=( const IntCell & rhs )
{
    if ( this != &rhs )
    {
        *storedValue = *rhs.storedValue;
    }
    return *this;
}

/**
 * Move assignment operator
 */
IntCell & IntCell::operator=( IntCell && rhs )
{
    std::swap( storedValue, rhs.storedValue );
    return *this;
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
