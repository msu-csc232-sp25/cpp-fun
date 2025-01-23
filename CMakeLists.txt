cmake_minimum_required(VERSION 3.10)
project(cppfun)
set(CMAKE_CXX_STANDARD 20)
add_executable(simple_demo simple.cpp)
add_executable(multi_demo multi.cpp)

set(SRC_MAIN_FILES src/main/cpp/int_cell_demo.cpp src/main/cpp/int_cell.cpp)
set(SRC_BAD_INT_CELL_DEMO src/main/cpp/int_cell_ptr_demo.cpp src/main/cpp/int_cell_ptr.cpp)
set(SRC_BIG_FIVE_INT_CELL_DEMO src/main/cpp/int_cell_ptr_big_five_demo.cpp src/main/cpp/int_cell_ptr_big_five.cpp)
set(SRC_MEMORY_CELL_TEMPLATE_DEMO src/main/cpp/memory_cell_demo.cpp
                                  src/main/cpp/memory_cell_expanded.cpp)

add_executable(int_cell_demo ${SRC_MAIN_FILES})
add_executable(int_cell_ptr_demo ${SRC_BAD_INT_CELL_DEMO})
add_executable(int_cell_ptr_big_five_demo ${SRC_BIG_FIVE_INT_CELL_DEMO})
add_executable(memory_cell_demo ${SRC_MEMORY_CELL_TEMPLATE_DEMO})

target_include_directories(int_cell_demo PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/src/main/cpp)
target_include_directories(int_cell_ptr_demo PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/src/main/cpp)
target_include_directories(int_cell_ptr_big_five_demo PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/src/main/cpp)
target_include_directories(memory_cell_demo PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/src/main/cpp)
