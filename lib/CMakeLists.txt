find_package(HPX REQUIRED)

include_directories(${HPX_INCLUDE_DIR})
link_directories(${HPX_LIBRARY_DIR})

add_library(matrix INTERFACE matrix.hpp)
target_include_directories(matrix INTERFACE ${HPX_INCLUDE_DIR})
target_link_libraries(matrix INTERFACE ${HPX_LIBRARIES})
