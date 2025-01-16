cmake_minimum_required(VERSION 3.10)
project(cppfun)
set(CMAKE_CXX_STANDARD 20)
add_executable(simple_demo simple.cpp)
add_executable(multi_demo multi.cpp)

set(SRC_MAIN_FILES src/main/cpp/int_cell_demo.cpp src/main/cpp/int_cell.cpp)
add_executable(int_cell_demo ${SRC_MAIN_FILES})
target_include_directories(int_cell_demo PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/src/main/cpp)