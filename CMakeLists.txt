cmake_minimum_required(VERSION 3.2)

project(Paralle_Matrix_Multiplication)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

add_subdirectory(lib)
add_subdirectory(examples)

enable_testing()
include(CTest)
add_subdirectory(tests)

add_test(multiplication tests/mult_test)
add_test(unit  tests/unit_test)
