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
     * Destructor.
     * The destructor is called whenever an object goes out of scope or is subjected to a delete.
     */
    ~IntCell();

    /**
     * Copy constructor.
     * Called when
     *   we have a declaration with initialization, such as
     *     IntCell B = C;  // copy construct when C is lvalue; move construct if C is rvalue
     *     IntCell B{ C }; // copy construct when C is lvalue; move construct if C is rvalue
     *   an object passed using call-by-value (instead of by & or const &)
     *   an object returned by value (instead of by & or const &); 
     *      copy used when returning lvalue; move if object being returned is an rvalue
     */
    IntCell( const IntCell & rhs );

    /**
     * Move constructor
     */
    IntCell( IntCell && rhs );

    /**
     * Copy assignment operator
     * IntCell B;
     * IntCell C;
     * C = B; // assuming B is lvalue; move used if B is rvalue
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
