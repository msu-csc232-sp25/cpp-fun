/**
 * @brief MemoryCell specification.
 * @author Jim Daehn
 * @file memory_cell.h
 */

#ifndef CSC232_MEMORY_CELL_H
#define CSC232_MEMORY_CELL_H

/**
 * A class for simulating a memory cell.
 *
 * @tparam Object the type of object stored in this memory cell.
 * @pre Object type must have a default constructor defined.
 */
template<typename Object>
class MemoryCell {
public:
    /**
     * Initializing constructor.
     * @param initialValue an initial value to store in this memory cell.
     */
    explicit MemoryCell(const Object& initialValue = Object{});

    /**
     * Memory cell accessor method.
     * @return the value stored in this memory cell.
     */
    const Object & read() const;

    /**
     * Memory cell mutator method.
     * @param value a value to store in this memory cell.
     */
    void write(const Object& value);
private:
    Object storedValue;
};

#endif // CSC232_MEMORY_CELL_H
