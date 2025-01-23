/**
 * @brief Expanded templates used in the memory cell demo.
 *
 * This file is compiled as part of the project, and
 * the template implementation file (memory_cell.cpp) is not compiled as part of the project.
 * We (Carrno & Henry) have had success using this technique with several older compilers.
 * The downside is that all of the template expansions have to be listed by the programmer,
 * and when the class template uses other class templates, sometimes those have to be listed,
 * too. The advantage is that if the implementation of the member functions in MemoryCell
 * changes, only memory_cell_expanded.cpp needs to be recompiled.
 *
 * @author Jim Daehn
 * @file memory_cell_expanded.cpp
 */

#include <string>
#include "memory_cell.cpp"

template class MemoryCell<int>;
template class MemoryCell<std::string>;
