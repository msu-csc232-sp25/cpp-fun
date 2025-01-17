/**
 * @brief IntCell specification.
 * @author Jim Daehn
 * @file int_cell.h
 */

#ifndef CSC232_INT_CELL_H_
#define CSC232_INT_CELL_H_

class IntCell
{
public:
    explicit IntCell( int initialValue = 0 );
    int read() const;
    void write( int value );

private:
    int storedValue;
};

#endif
