/**
 * @brief Entry point fo the MemoryCell template class demo.
 * @author Jim Daehn
 * @file memory_cell_demo.cpp
 */

#include <iostream>
#include <string>
#include "memory_cell.h"

using std::cout;
using std::endl;

int main(){
    MemoryCell<int> m1;
    MemoryCell<std::string> m2;

    m1.write(420);
    m2.write("CSC232");

    cout << "m1.read() = " << m1.read() << endl;
    cout << "m2.read() = " << m2.read() << endl;

    return 0;
}