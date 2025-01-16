/**
 * @brief IntCell specification.
 * @author Jim Daehn
 * @file int_cell_ptr_big_five.h
 */

#ifndef CSC232_INT_CELL_H_
#define CSC232_INT_CELL_H_

#include <algorithm>

class IntCell
{
public:
    explicit IntCell( int initialValue = 0 );
    /**
     * Destructor
     */
    ~IntCell();

    /**
     * Copy constructor
     */
    IntCell( const IntCell & rhs );

    /**
     * Move constructor
     */
    IntCell( IntCell && rhs );

    /**
     * Copy assignment operator
     */
    IntCell & operator=( const IntCell & rhs );

    /**
     * Move assignment operator
     */
    IntCell & operator=( IntCell && rhs );

    int read() const;
    void write( int value );

private:
    int* storedValue;
};

#endif
